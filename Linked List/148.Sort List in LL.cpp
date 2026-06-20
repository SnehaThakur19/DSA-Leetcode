class Solution {
public:
    ListNode* findMid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;
        while (left != NULL && right != NULL) {
            if (left->val <= right->val) {
                temp->next = left;
                left = left->next;
            } else {
                temp->next = right;
                right = right->next;
            }
            temp = temp->next;
        }
        if (left) temp->next = left;
        else temp->next = right;
        return dummyNode->next;
    }
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* mid = findMid(head);
        ListNode* rightHead = mid->next;
        mid->next = NULL;
        ListNode* left = sortList(head);
        ListNode* right = sortList(rightHead);
        return merge(left, right);
    }
};
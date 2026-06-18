class Solution {
public:
ListNode* reverseLinkedList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while (temp != nullptr) {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head -> next == nullptr) return true ;
        ListNode* slow = head ;
        ListNode* fast = head ;
        while (fast-> next != nullptr && fast -> next -> next != nullptr) {
            slow = slow -> next ;
            fast = fast -> next -> next;
        }
        ListNode*newHead = reverseLinkedList(slow -> next);
        ListNode*first = head ;
        ListNode* second = newHead ;
        while (second != nullptr) {
            if (first -> val != second -> val) {
                reverseLinkedList(newHead);
                return false;
            }
            first = first -> next;
            second = second -> next;
        }
        reverseLinkedList(newHead);
        return true;
    }
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(-1);
        ListNode* curr = dummyHead;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        while(temp1 != nullptr || temp2 != nullptr) {
            int sum = carry;
            if(temp1) {
                sum+= temp1 -> val;
                temp1= temp1 -> next;
            }
            if(temp2) {
                sum+= temp2 -> val;
                temp2= temp2 -> next;
            }
            curr -> next = new ListNode(sum%10);
            carry = sum/10;
            curr = curr -> next;
        }
        if (carry >0) {
            curr -> next = new ListNode(carry);
        }
        return dummyHead -> next;
    }
};
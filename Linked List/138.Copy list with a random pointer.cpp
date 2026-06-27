class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;
        Node* temp = head ;
        while (temp != NULL) {
            Node* copyNode = new Node (temp -> val);
            copyNode -> next = temp -> next ;
            temp -> next = copyNode ;
            temp = copyNode -> next;
        }
        temp = head;
        while (temp != NULL) {
            Node* copyNode = temp -> next ;
            if(temp -> random)
            copyNode -> random = temp ->random -> next;
            else
            copyNode -> random = nullptr;
            temp = temp -> next -> next;
        }
        Node* dNode = new Node (-1);
        Node* res = dNode ;
        temp = head ;
        while (temp != NULL) {
            Node* copyNode = temp->next;
            res->next = copyNode;
            temp->next = copyNode->next;
            res = res->next;
            temp = temp->next;
        }
        return dNode -> next;
    }
};

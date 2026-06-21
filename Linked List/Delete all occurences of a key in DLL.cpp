Node* deleteOccurences(Node* head, int key) {
        Node* temp = head;
        while(temp != nullptr) {
            if(temp -> data == key) {
                if(temp == head) {
                    head = temp -> next;
                    Node* nextNode = temp -> next;
                    Node* prevNode = temp -> prev;
                    if(nextNode != nullptr) {
                        nextNode -> prev = prevNode;
                    }
                    if(prevNode != nullptr) {
                        prevNode -> next = nextNode;
                    }
                    delete temp;
                    temp = nextNode;
                }
            } else {
                temp = temp -> next;
            }
        }  
        return head;
    }
Node* removeDuplicates(Node* head) {
    Node* temp = head;
    while(temp != nullptr && temp->next != nullptr) {
        Node* nextNode = temp->next;
        while(nextNode != nullptr && temp->data == nextNode->data) {
            Node* duplicate = nextNode;
            nextNode = nextNode->next;
            delete duplicate;
        }
        temp->next = nextNode;
        if(nextNode != nullptr) nextNode->prev = temp;
        temp = temp->next;
 }
    return head;
}
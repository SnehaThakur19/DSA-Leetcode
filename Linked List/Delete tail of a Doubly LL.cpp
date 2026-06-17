Node* deleteTail(Node* head) {
    if (head == NULL || head->next == NULL) {
        return NULL; 
    }
    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next; 
    }
    Node* newTail= tail->back; 
    newTail->next = nullptr; 
    tail->back = nullptr;
    delete tail; 
    return head; 
}
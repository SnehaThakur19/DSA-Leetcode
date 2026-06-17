Node* insertBeforeTail(Node* head, int val) {
    if(head -> next == NULL) {
        return insertBeforeHead(head,val);
    }
    Node* tail = head;
    while(tail->next != NULL) {
        tail = tail->next;
    }
    Node* prev = tail->back;
    Node* newNode = new Node(val,tail,prev);
    prev->next = newNode;
    tail->back = newNode;
    return head;
}
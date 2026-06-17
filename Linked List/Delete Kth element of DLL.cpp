Node* removeKthElement(Node* head,int k) {
    if(head == NULL) {
        return NULL;
    }
    int cnt = 0;
    Node* kNode = head;
    while(kNode != NULL) {
        cnt++;
        if(cnt ==k) break;
        kNode = kNode->next;
        if(prev == NULL && front == NULL) {
            return NULL;
        } 
        else if (prev == NULL) {
            return deleteHead(head);
        }
        else if (front == NULL) {
            return deleteTail(head);
        }
        prev->next = front;
        front->back = prev;
        kNode->next = nullptr;
        kNode->back = nullptr;
        delete kNode;   
        return head;
}
Node* insertBeforeKthElement(Node* head, int k , int val) {
    if(k==1) {
        return insertBeforeHead(head,val);
    }
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL) {
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
}
Node*prev = temp->back;
Node* newNode = new Node(val,temp,prev);
prev->next = newNode;
temp->back = newNode;
return head;
}

Node* insertBeforeHead(Node* head, int val) {
    Node* newHead = new Node(val,head,nullptr);
    head->back = newHead;
    return newHead;
}
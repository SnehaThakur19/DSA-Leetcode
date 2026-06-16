Node* insertLast(Node* head, int val) {
    if (head == NULL) {
        return new Node(val);
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
} 
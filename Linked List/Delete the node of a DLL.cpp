void deleteNode(Node* temp) {
    Node* prev = temp->back;
    Node* front = temp->next;
    if(front == NULL) {
        prev ->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }
    prev->next = front;
    front->back = prev;
    temp-> next = temp->back = nullptr;
    free (temp);
}
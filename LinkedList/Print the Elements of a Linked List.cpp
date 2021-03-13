void printLinkedList(SinglyLinkedListNode* head) {
    
    while(head){
        cout<<head->data<<"\n";
        head=head->next;
    }

}
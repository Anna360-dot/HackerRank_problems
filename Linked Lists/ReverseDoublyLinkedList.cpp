DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    if(llist == nullptr){return llist;}
    
    DoublyLinkedListNode* revList = llist;
    DoublyLinkedListNode* temp = nullptr;
    
    while(revList != nullptr){
        temp = revList->prev;
        revList->prev = revList->next;
        revList->next = temp;
        revList = revList->prev;
    }
    
    if(temp != nullptr){
        llist = temp->prev;
    }
    
    return llist;
}
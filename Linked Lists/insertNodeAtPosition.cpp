SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    
    if(position == 0){
        newNode->next = llist;
        return newNode;
    }
    
    SinglyLinkedListNode* current = llist;
    int curIndex = 0;
 
    while(curIndex < position - 1){
        current = current->next;
        curIndex++;
    }
 
    newNode->next = current->next;
    current->next = newNode;
    
    return llist;
    
}
bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    if(head == nullptr || head->next == nullptr){return false;} 
    
    Node* cur1 = head;
    Node* cur2 = head;
    
    while(cur2 != nullptr && cur2->next != nullptr){
        cur1 = cur1->next;
        cur2 = cur2->next->next;
        
        if(cur1 == cur2){
            return true;
        }
    
    }
    return false;
}
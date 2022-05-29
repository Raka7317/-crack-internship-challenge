bool circularlinkedlist( struct node* head){
    
    if(head==NULL or head->next==NULL)
     return false;
    node* low=head;
    node* fast=head;
    
    while(fast!=NULL and fast->next!=NULL){
        low=low->next;
        fast=fast->next->next;
        
    }
    if(low==fast)
      return true;
    
    false;
}
struct node* movelastelementtofront(struct node* head){
    struct node* temp=head;
    struct node* prev=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
        
    }
    prev=temp->next;
    temp->next=NULL;
    prev->next=head;
    head=prev;
  
  
  return head;
    
}
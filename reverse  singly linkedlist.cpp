 struct node* reverse( struct node* head){
    node*  curr=head;
    node* prev=NULL;
    while(curr!=NULL){
        node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        
        
    }
    head=prev;
    return head;
}
 struct node* reverse( struct node* head){
    node*  curr=head;
    node* prev=NULL;
    node* nex;
    int  c=0;
    while(curr!=NULL){
         nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
        c++;
        
        
    }
    if(nex!=NULL){
        head->next=reverse(nex,k)
        
    }
    return prev;
}
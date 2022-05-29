node* roatelinkedlistbynnodes(struct node* head,k){
    if(n==0){
        return head;
        
    }
    node*curr=head;
    int count=1;
    while(curr!=NULL && count<k){
        curr=curr->next;
        count++;
        }
        node*nthnode=curr;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=head;
    head->prev=curr;
    head=nthnode->next;
    head->prev=NULL;
    nthnode->next=NULL;
}
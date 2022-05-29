node* revrseddl(node* head){
    node* curr=head;
    if(curr==NULL  or curr->next==NULL){
        return head;
        
    }
    while(curr->next=NULL){
        curr=curr->next;
    }
    curr->next=curr->prev;
    curr->prev=NULL;
    curr=curr->next;
    while(curr->prev!=NULL){
        node* temp=curr-next;
        curr->nex=curr->prev;
        curr->prev=temp;
        curr=curr->next;
    }
    return head;
}
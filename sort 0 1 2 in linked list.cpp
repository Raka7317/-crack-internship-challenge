node* sorting(node* head){
    node* zeros=NULL;
    node*zeroiterator=zero;
    node* once=NULL;
    node* onceiterator=once;
    node* second=NULL;
    node8 seconditerator=second;
    node* curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            zero->next=curr;
            zeroiterator=zeroiterator->next;
        }
        else if(curr->data==1){
            once->next=curr;
            onceiterator=onceiterator->next;
            
        }
        else{
            second->next=curr;
            seconditerator=seconditerator->next;
        }
    }
    head=zero->next;
    zeroiterator->next=once->next;
    onceiterator->next=second->next;
}
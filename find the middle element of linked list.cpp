struct node* middlenode(  struct node*  head){
    node* curr=head;
    int count=0;
    while(curr!=NULL){
        count++;
        curr=curr->next;
        
    }
    node* low=head;
    node* fast=head;
    while(fast!=NULL and  fast->next!=NULL){
        low=low->next;
        fast=fat->next;
    }
    if(count%2==0){
        return low->next;
    }
    else{
        return low;
    }
}
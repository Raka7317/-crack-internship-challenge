struct node* deleteloop(struct node* head){
    node* low=head;
    node* fast=head;
    while(low!=NULL and high!=NULL and high->next!=NULL){
        low=low->next;
        fast=fast->next;
        if(low==high){
            break;
        }
    }
    if(low==head){
        while(high->next!=low){
            high=high->next;
        }
        high->next=NULL;
    }
    else if(low==high){
        low=head;
        while(low->next!=high->next){
            low=low->next;
            high=high->next;
        }
        high->next=NULL;
    }
}
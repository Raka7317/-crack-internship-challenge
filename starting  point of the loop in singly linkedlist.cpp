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
       return head;
    }
    else if(low==high){
        low=head;
        while(low->next!=high->next){
            low=low->next;
            high=high->next;
            
        }
        return low->next;
        
    }
}
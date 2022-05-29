bool isplalindrome(  node * head){
    node* slow=head;
    node* fast=head;
    while( fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        
    }
    node* curr=slow;
    node* prev=NULL;
    node* next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    fast=head;
    while(prev!=NULL){
        if(fast->data!-prev->data){
            return false;
        fast=fast->next;
        prev=prev->next;
        }
        return true;
    }
    
}
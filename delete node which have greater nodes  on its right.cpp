node* reverse(node* root){
    node prev=NULL;
    node*prev=NULL;
    node curr=root;
    while(curr){
        node* next=curr-next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
    
}
node* compute(node* head){
    head=reverse(head);
    node*curr=head;
    int ma=head->data;
    node* prev=head;
    head=head->next;
    while(head){
        if(head->data=ma){
            ma=head->data;
            pre=head;
            head=head->next;
        }
        else{
            prev->next=head->next;
            head=prev->next;
        }
    }
    head=reverse(curr);
    return head;
     
}
struct node* deletedublicate(struct node* head){
    node* temp=head;
    while(temp->next!=NULL){
        if(head->data==head->next->data){
            head->next=head->next->next;
        }
        else{
            head=head->next;
        }
    }
    return head;
}
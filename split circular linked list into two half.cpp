void splitlist(node *head, node **head1 , node**  head2){
    node* slow=head;
    node* fast=head->next;
    while( fast!=head and (fast->next)!=head){
        slow=slow->next;
        fast=fast->next->next;
    }
    *head1=head;
    *head2=slow->next;
     slow->next=*head1;
     node*  curr=head2;
     while(curr->next!=head){
         curr=curr->next;
     }
     crr->next=*head2;
}
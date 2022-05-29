bool detectloop( node* head){
    if(head==NULL or head->next==NULL){
        return  false;
    }
   
       node* low=head;
       node* fast=head;
       while(fast!=NULL or fast->next!=NULL){
           low=low->next;
           fast=fast->next->next;
           if(low==fast){
               return true;
           }
       
   }
   return false;
}
node*  deletenthnodefromlast(node* head,int k){
    node* curr=head;
    node* prev=NULL;
    while(curr){
        node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    int t=1;
    if(k==0)
      return NULL;
    if(k==1){
        return head;
    }
    while(curr!=NULL && t<k){
        curr=curr->next;
        t++;
    }
    return curr;
}
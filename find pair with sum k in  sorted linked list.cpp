bool findpair( node* head,int k){
  node* first=head;
  node* second=head;
  while(second->next!=NULL){
      second =second->next;
  }
  bool found=false;
  while(first!=second and second->prev!=first){
      if(first->data+second->data==k){
        return true
        cout<<first->data<<" "<<second->data;
      }
      else{
          if(first->data+second->data<k){
              first=first->next;
          }
          else{
              second=second->next;
          }
      }
  }
  if(found==false){
      cout<<"no pair found\n";
  }
  
}
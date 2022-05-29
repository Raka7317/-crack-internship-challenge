struct node* removedublicate(struct node* head){
    unordered_map<int,int>mp;
    node* curr=head;
    node* prev=curr;
    mp[curr->data]=1;
    prev=curr;
    curr=curr->next;
    while(curr!=NULL){
        if(mp[curr->data]){
            prev->next=curr->next;
            free(curr);
            
        }
        else{
            mp[curr->data]=1;
            prev=curr;
        }
        curr=prev->next;
    }
    return head;
    
    
};
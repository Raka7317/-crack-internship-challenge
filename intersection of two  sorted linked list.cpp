node* intersection(node* root1,node* root2){
    node* temp1=root1;
    node* temp2=root2;
    node* head=NULL;
    node* curr=NULL;
    while(temp1 and temp2){
        if(temp1->data=temp2->data){
            if(head==NULL){
                node* t=new node(temp1->data);
                head=t;
                curr=t;
            }
            else{
                node* t=new node(temp1->data){
                    curr=t;
                    curr=curr->next;
                }
                temp1=temp1->next;
                temp2=temp2->next;
            }
        else{
            if(temp1->data>temp2->data){
                temp1=temp1->next;
            }
            else{
                temp2=temp2->next;
        }    
        }
    }
    return head;
}
int intersectpoint( node* head1,  node* head2){
    node* ptr1=head1;
    node* ptr2=head2;
    int ct1=0;
    int ct2=0;
    while( ptr1!=NULL){
        ct1++;
        ptr1=ptr1->next;
    }
     while( ptr2!=NULL){
        ct2++;
        ptr2=ptr2->next;
    }
    int  n=abs(ct1=ct2);
    ptr1=head1;
    ptr2=head2;
    if(ct1>ct2){
        for(int i=0;i<n;i++){
            ptr2=ptr2->next;
        }
    }
    else{
        for(int i=0;i<n;i++){
            ptr1=ptr1->next;
        }
    }
    while(ptr1!=ptr2){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    if(ptr1){
        return ptr1->data;
    }
    return -1;
}
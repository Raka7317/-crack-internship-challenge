node* flatten(node* root){
    if(root==NULL or root->next==NULL)
       return root;
    return merge( root,faltten(root->next))
}
node*merge(node* a,node*b){
    if(a==NULL)return b;
    if(b==NULL)return a;
    node* result;
    if(a->data < b->data){
        result=a;
        reslut->bottom=merge(a->bottom,b);
    }
    else{
        result=b;
        reslut->bottom=merge(a,b->bottom);
    }
    reslut->next=NULL
    return result;
}
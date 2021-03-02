#include<stdio.h>
struct bstnode
{
    int data;
    struct bstnode *left;
    struct bstnode *right;
};
//find function
struct bstnode* find(struct bstnode *root, int data)
{
    if (root == NULL)
        return(NULL);
    if(data < root->data)
        return(find(root->left,data));
    else if(data > root->data)
        return(find(root->right,data));
    return(root);
};
//insert function
void insert( struct bstnode *root,int data)
{
    struct bstnode *par;
    struct bstnode *n= malloc( sizeof(struct bstnode));
    n->left = NULL;
    n->right = NULL;
    n->data = data;
    if(root==NULL)
        root = n;
    else
    {
        par = root;
        while(par!=NULL)
        {
            if(par->left == NULL)
             {
            par->left= n;
            par=par->left;
             }
             else if(par->right == NULL)
             {
            par->right= n;
            par = par->right;
             }
        }
    }

}

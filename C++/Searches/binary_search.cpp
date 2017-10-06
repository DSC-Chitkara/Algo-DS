#include<iostream>
using namespace std;
struct treeNode
{
    int data;
    struct treeNode *left;
    struct treeNode *right;
};
struct treeNode *root = NULL;
struct treeNode *inserts(struct treeNode *root, int num)
{
    if(root == NULL)
    {
        struct treeNode *nnode = new struct treeNode;
        nnode->data = num;
        nnode->left = nnode->right = NULL;
        root = nnode;
        return root;
    }
    if(num > root->data)
        root->right = inserts(root->right, num);
    else
        root->left = inserts(root->left, num);
    return root;
}
void inorder(struct treeNode *root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    int n, num;
    cout<<"enter no of elements to insert: ";
    cin>>n;
    cout<<"enter element to insert: ";
    while(n){
        cin>>num;
        root = inserts(root, num);
        n--;
    }
    inorder(root);
}

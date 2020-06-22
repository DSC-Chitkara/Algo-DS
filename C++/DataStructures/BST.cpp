#include<iostream>
using namespace std;
//make node of tree
struct node {
	int data;
	struct node* right;
	struct node* left;
};
//it creates the binary tree
struct node* binary_tree(int d,struct node *root) {
	if(root==NULL) {
		struct node *nn;
		nn = new node();
		nn->left = NULL;
		nn->right = NULL;
		nn->data = d;
		return nn;
	}
	if(d>root->data)
		root->right = binary_tree(d,root->right);
	else if(d<root->data)
		root->left = binary_tree(d,root->left);
	return root;
}
//It will print the nodes of tree
void display(struct node *root) {
	if(root!=NULL) {
		display(root->left);
		cout<<root->data<<" ";
		display(root->right);
	}
}

int main() {
	struct node* root = NULL;
	int n,num;
	cout<<"Enter the number of node:";
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>num;
		root = binary_tree(num,root);
	}
	cout<<"Output:\n"
	display(root);
}

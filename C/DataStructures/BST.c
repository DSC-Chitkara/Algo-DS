#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

struct BstNode{

	int data;
	struct BstNode *left;
	struct BstNode *right;
};

struct BstNode* getnode(int data){
	struct BstNode* newnode= (struct BstNode*)malloc(sizeof(struct BstNode));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	
	return newnode;

}

struct BstNode* Insert(struct BstNode *root,int data)
{
	if(root==NULL)	//EMPTY TREE
	{
	 root=getnode(data);
	}
	//If data to be inserted is lesser,insert in left subtree
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right,data);
	}
return root;
}

//To search an element in BST, returns true if element is found
bool Search(struct BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int search_minvalue(struct BstNode* *root){
 	Node* current=root;
 	
 	while(current->left!=NULL){
 	 current=current->left;
 	}
 	
 	return(current->data);

}


int main()
{
	struct BstNode *root=NULL;
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
	int n;
	scanf("%d",&n);
	if(Search(root,n))
		printf("Exist");
	else
		printf("Not exist");
	printf("The minm value is %d \n",search_minvalue(root));

}

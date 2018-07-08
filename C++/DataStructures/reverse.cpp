#include<iostream>
using namespace std;


struct node {
	
int info;
node *next;
	
};

int main() {
	
	int i, linkLength ;
	node *head = NULL;
	node *newNode, *tempNode, *prev, *nextNode;
	prev=NULL;
	
	cout << " \n Enter the number of values in the list : " ;
	cin >> linkLength ;
	
	cout << "\n Enter Values for the List : " ;
	
	while ( head == NULL ) {

		head = new node ;
		cin >> head -> info ;
		head -> next = NULL;
	}
	
	for ( i = 0 ;i < linkLength-1 ; i++ ) {
		
		newNode=new node;
		cin >> newNode -> info ;
		newNode -> next = NULL ;
		
		tempNode = head;
		while ( tempNode -> next != NULL ){
	
			tempNode = tempNode -> next ;
		}

		tempNode -> next = newNode;
	}
	
	cout << "\n PRINTED THE ENTERED VALUES : " ;
	tempNode = head ;
	while ( tempNode != NULL ) {

		cout << tempNode -> info << " " ;
		tempNode = tempNode->next;
	}

	//REVERSING THE LIST 
	
	tempNode = head ;
	while ( tempNode != NULL ) {
		
		nextNode = tempNode -> next ;
		tempNode -> next = prev ;
		prev = tempNode ;
		tempNode = nextNode ;
	}
	
	//Reinitializing the head...
	head = prev ;
	
	cout << " \n Printing the Reversed list ... " ;
	
	tempNode = head ;
	while ( tempNode != NULL ) {
		
	cout << tempNode->info ;
	tempNode = tempNode->next ;
	}
	
	return 0;
}

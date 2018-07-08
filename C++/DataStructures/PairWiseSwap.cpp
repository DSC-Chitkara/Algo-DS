#include<iostream>
using namespace std;


struct node {
	
	int info;
	node *next;
};

void swap( node *list );

int main() {
	
	int i, linkLength ;
	node *head = NULL;
	node *newNode, *tempNode ;
	
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

	// SWAPPING PROCESS 
	swap(head);
	

	return 0;
}

void swap( node *list ) {
	
	int tempInfo ;
	node *tempNode;
	//Why another node variable -> to save the value of list variable which is needed to print the contents later  
	
	tempNode = list;	
	while ( tempNode -> next != NULL ) {

		tempInfo = tempNode -> info ;
		tempNode -> info = tempNode->next -> info;
		tempNode -> next->info = tempInfo;
	    	tempNode = tempNode -> next -> next ;
	}
	
	cout << "\n The Swapped Results : \n " ; 
	
	tempNode = list ;
	while ( tempNode != NULL ) {

		cout << tempNode -> info << " -> " ;
		tempNode = tempNode -> next ;
	}
	
}


#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
void insertAtHead(struct Node** head , int value){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
         newNode->data = value;
         newNode->next = NULL;
         newNode->next = *head;
         *head = newNode;
}
void printlist(struct Node* current){
	while(current != NULL){
		if(current->next != NULL){
		printf("%d ->",current->data );}else{
		
		printf("%d",current->data);}
		current = current->next;
	}printf("\n");
	
}
int main(){
	struct Node* head = NULL;
	insertAtHead(&head,10);
	insertAtHead(&head,20);
	insertAtHead(&head,30);
	printlist(head);
	return 0;
}

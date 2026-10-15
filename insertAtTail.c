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
void insertAtTail(struct Node** head , int value){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
         newNode->data = value;
         newNode->next = NULL;
         if(*head == NULL){
         	*head = newNode;
         	return;
		 }struct Node* current= *head;
		 while(current->next != NULL){
		 	current = current->next;
		 }
		 current->next = newNode;
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
	insertAtTail(&head,10);
	insertAtTail(&head,20);
	insertAtTail(&head,30);
	insertAtHead(&head,5);
	insertAtHead(&head,3);
	printlist(head);
    int choice, value;

    while (1) {
        printf("\n1. insertAtHead  2. insertAtTail  3. printlist  0. close\n");
        printf("choice: ");
        scanf("%d", &choice);

        if (choice == 0) break;

        if (choice == 1 || choice == 2) {
            printf("value: ");
            scanf("%d", &value);
            if (choice == 1) insertAtHead(&head, value);
            else             insertAtTail(&head, value);
        } else if (choice == 3) {
            printlist(head);
        }
    }
    return 0;
}


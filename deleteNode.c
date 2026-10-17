#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void insertAtHead(struct Node** head , int value){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	newNode->next = *head;
	*head = newNode;
}
void insertAtTail(struct Node**head, int value){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	newNode->next = NULL;
	if(*head == NULL){
		*head = newNode;
		return;
	}
	struct Node* current = *head;
	while (current->next !=NULL){
		current = current->next;
	}
	current->next = newNode;
}
void printList(struct Node* current){
	if(current == NULL){
		printf("(empty)\n");
		return;
	}
	while (current != NULL){
	if(current->next != NULL){
		printf("%d ->",current ->data);
	}else{
		printf("%d",current->data);
	}
	current = current->next;
	}printf("\n");
}
void  deleteNode(struct Node** head, int value){
	if (*head == NULL){
		printf("empty list\n");
		return;
	}
	if ((*head)->data == value){
		struct Node* temp = *head;
		*head = (*head)->next;
		free(temp);
		printf("deletde %d\n",value);
		return;
	}
	struct Node* current = *head;
	while (current->next != NULL){
		if(current->next->data  == value){
			struct Node*temp = current->next;
			current->next = temp->next;
			free(temp);
			printf("deleted %d\n",value);
			return;
		}
		current = current->next;
	}
	printf("%d not found\n",value);
}
int main() {
    struct Node* head = NULL;

    insertAtTail(&head, 10);
    insertAtTail(&head, 20);
    insertAtTail(&head, 30);
    insertAtTail(&head, 40);

    printf("original: ");
    printList(head);                       

    deleteNode(&head, 30);                  
    printf("after delete 30: ");
    printList(head);                       
    deleteNode(&head, 10);                  
    printf("after delete 10: ");
    printList(head);                        

    deleteNode(&head, 999);                
    printf("after delete 999: ");
    printList(head);                        

    deleteNode(&head, 40);                  
    printf("after delete 40: ");
    printList(head);                        

    return 0;
}

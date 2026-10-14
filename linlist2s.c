#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next;
	
};
int main(){
	struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
	n1->data  = 10;
	n1->next = NULL;
	struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
	n2->data = 20;
	n2->next = NULL;
	struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));
	n3->data = 30;
	n3->next = NULL;
	n1->next = n2;
	n2->next = n3;
	struct Node* current= n1;
	int max = n1->data ;
	while(current != NULL){
		if(current->data  > max){
			max = current->data;
		}current = current->next ;
	}printf("%d",max);
	

	printf("\n");
	return 0;
}

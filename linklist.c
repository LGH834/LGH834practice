#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
    n1->data = 10;
    n1->next = NULL;
    
    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
    n2->data = 20;
    n2->next = NULL;
    n1->next = n2;
    struct Node* current = n1;        
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;       
    }
    printf("\n");
    
    return 0;
}

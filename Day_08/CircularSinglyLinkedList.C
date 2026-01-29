#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newNode->data);

        if(head == NULL) {
            head = newNode;
            temp = newNode;
            newNode->next = head;
        } else {
            temp->next = newNode;
            newNode->next = head;
            temp = newNode;
        }
    }

    return 0;
}



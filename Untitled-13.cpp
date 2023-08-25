#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;

void addInteger(Node** head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void addIntegerAtPosition(Node** head, int value, int position) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
    } else {
        Node* current = *head;
        for (int i = 0; i < position - 1 && current != NULL; ++i) {
            current = current->next;
        }
        if (current != NULL) {
            newNode->next = current->next;
            current->next = newNode;
        }
    }
}

void displayIntegers(Node* head) {
    Node* current = head;
    printf("Danh sach so nguyen:\n");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;

    addInteger(&head, 10);
    addInteger(&head, 20);
    addInteger(&head, 30);

    int newValue;
    int position;

    printf("Danh sach truoc khi them phan tu:\n");
    displayIntegers(head);

    printf("Nhap so nguyen muon them: ");
    scanf("%d", &newValue);

    printf("Nhap vi tri muon them: ");
    scanf("%d", &position);


    addIntegerAtPosition(&head, newValue, position);

    printf("Danh sach sau khi them phan tu:\n");
    displayIntegers(head);

    return 0;
}

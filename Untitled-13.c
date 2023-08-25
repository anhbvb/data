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
    int n; // Số lượng số nguyên muốn thêm
    int position; // Vị trí muốn thêm số nguyên
    int newValue; // Số nguyên muốn thêm

    printf("Nhap so luong so nguyen muon them: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int value;
        printf("Nhap so nguyen thu %d: ", i + 1);
        scanf("%d", &value);
        addInteger(&head, value);
    }

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

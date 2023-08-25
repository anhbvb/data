#include <iostream>

// Định nghĩa cấu trúc Node cho một phần tử trong danh sách liên kết
struct Node {
    int data;
    Node* next;
};

// Hàm thêm một phần tử vào đầu danh sách liên kết
void push(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Hàm đảo ngược danh sách liên kết
void reverseLinkedList(Node*& head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

// Hàm in danh sách liên kết
void printLinkedList(const Node* head) {
    const Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;

    push(head, 3);
    push(head, 5155);
    push(head, 7);
    push(head, 9);

    std::cout << "Danh sách liên kết ban đầu: ";
    printLinkedList(head);

    reverseLinkedList(head);

    std::cout << "Danh sách liên kết sau khi đảo ngược: ";
    printLinkedList(head);

    return 0;
}

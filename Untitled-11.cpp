#include <iostream>
#include <string>

class Contact {
public:
    std::string name;
    std::string phoneNumber;

    Contact(const std::string& n, const std::string& num) : name(n), phoneNumber(num) {}
};

// Lớp Node đại diện cho một nút trong danh sách liên kết
class Node {
public:
    Contact data;   // Thông tin liên hệ
    Node* next;     // Con trỏ đến nút tiếp theo trong danh sách

    Node(const Contact& contact) : data(contact), next(nullptr) {}
};

// Lớp PhoneBook để quản lý danh bạ điện thoại
class PhoneBook {
private:
    Node* head;     // Con trỏ đầu danh sách liên kết

public:
    PhoneBook() : head(nullptr) {}

    // Phương thức thêm liên hệ vào danh bạ
    void addContact(const Contact& contact) {
        Node* newNode = new Node(contact);
        newNode->next = head;   // Chèn nút mới vào đầu danh sách
        head = newNode;         // Cập nhật con trỏ đầu danh sách
    }

    // Phương thức hiển thị danh sách liên hệ
    void displayContacts() {
        Node* current = head;
        std::cout << "Danh ba dien thoai:\n";
        while (current != nullptr) {
            std::cout << "Ten: " << current->data.name << ", So dien thoai: " << current->data.phoneNumber << "\n";
            current = current->next;    // Di chuyển đến nút tiếp theo trong danh sách
        }
    }
};

int main() {
    PhoneBook phoneBook;

    // Thêm các liên hệ vào danh bạ
    phoneBook.addContact(Contact("John Doe", "1234567890"));
    phoneBook.addContact(Contact("Jane Smith", "9876543210"));
    phoneBook.addContact(Contact("Alice Johnson", "5555555555"));

    // Hiển thị danh bạ điện thoại
    phoneBook.displayContacts();

    return 0;
}

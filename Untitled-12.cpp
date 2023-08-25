#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;
    std::string studentID;

    Student(const std::string& n, int a, const std::string& id) : name(n), age(a), studentID(id) {}
};

struct Node {
    Student data;
    Node* next;

    Node(const Student& student) : data(student), next(nullptr) {}
};

class StudentList {
private:
    Node* head;

public:
    StudentList() : head(nullptr) {}

    void addStudent(const Student& student) {
        Node* newNode = new Node(student);
        newNode->next = head;
        head = newNode;
    }

    void displayStudents() {
        Node* current = head;
        std::cout << "Danh sach sinh vien:\n";
        while (current != nullptr) {
            std::cout << "Ten: " << current->data.name << "| Tuoi: " << current->data.age << "| Ma sinh vien: " << current->data.studentID << "\n";
            current = current->next;
        }
    }
};

int main() {
    StudentList studentList;

    int numStudents;
    std::cout << "Nhap so luong sinh vien muon them: ";
    std::cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        std::string name, studentID;
        int age;

        std::cout << "Nhap thong tin cho sinh vien " << i + 1 << ":\n";

        std::cout << "Nhap ten sinh vien: ";
        std::cin.ignore(); // Clear the newline character left in the buffer
        std::getline(std::cin, name);

        std::cout << "Nhap tuoi: ";
        std::cin >> age;

        std::cout << "Nhap ma sinh vien: ";
        std::cin.ignore();
        std::getline(std::cin, studentID);

        studentList.addStudent(Student(name, age, studentID));
        std::cout << "\n";
    }

    studentList.displayStudents();

    return 0;
}

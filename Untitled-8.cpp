#include <iostream>
#include <vector>

const int MAX_VALUE = 1000000; // Giả sử giá trị tối đa là 10^6

int main() {
    std::vector<int> arr;
    int n;

    std::cout << "Nhap so luong phan tu: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Nhap phan tu thu " << i + 1 << ": ";
        std::cin >> num;
        arr.push_back(num);
    }

    // Khai báo và khởi tạo mảng phụ để lưu số lần xuất hiện của mỗi số
    std::vector<int> frequency(MAX_VALUE + 1, 0);
    for (int i = 0; i < n; ++i) {
        frequency[arr[i]]++;
    }

    // In ra kết quả
    std::cout << "So lan xuat hien moi so trong mang:\n";
    for (int i = 1; i <= MAX_VALUE; ++i) {
        if (frequency[i] > 0) {
            std::cout << "So " << i << " xuat hien " << frequency[i] << " lan\n";
        }
    }

    return 0;
}

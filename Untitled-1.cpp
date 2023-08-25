#include <iostream>
#include <algorithm>

int main() {
    const int size = 5;
    int arr[size];

    std::cout << "Nhập " << size << " số nguyên vào mảng:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Sắp xếp mảng theo thứ tự tăng dần
    std::sort(arr, arr + size);

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    
    double average = static_cast<double>(sum) / size;

    std::cout << "Mảng sau khi sắp xếp:";
    for (int i = 0; i < size; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;

    std::cout << "Giá trị trung bình của các phần tử trong mảng: " << average << std::endl;

    return 0;
}

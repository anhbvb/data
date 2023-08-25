#include <iostream>
#include <vector>

bool isMonotonic(const std::vector<int>& arr) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > arr[i - 1]) {
            decreasing = false;
        } else if (arr[i] < arr[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    std::vector<int> arr;
    int n;

    std::cout << "Nhập số lượng phần tử: ";
    std::cin >> n;

    std::cout << "Nhập các phần tử của mảng:\n";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Nhập phần tử thứ " << i + 1 << ": ";
        std::cin >> num;
        arr.push_back(num);
    }

    if (isMonotonic(arr)) {
        std::cout << "Dãy là dãy đơn điệu." << std::endl;
    } else {
        std::cout << "Dãy không phải là dãy đơn điệu." << std::endl;
    }

    return 0;
}

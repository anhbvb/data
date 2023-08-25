#include <iostream>
#include <vector>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Nhập số lượng phần tử trong dãy
    int n;
    std::cout << "Nhap so luong phan tu: ";
    std::cin >> n;

    std::vector<int> daySo;

    // Nhập từng phần tử và thêm vào vector
    for (int i = 0; i < n; ++i) {
        int phanTu;
        std::cout << "Nhap phan tu thu " << i + 1 << ": ";
        std::cin >> phanTu;
        daySo.push_back(phanTu);
    }

    // Xóa các số nguyên tố khỏi vector
    for (auto it = daySo.begin(); it != daySo.end();) {
        if (isPrime(*it)) {
            it = daySo.erase(it);
        } else {
            ++it;
        }
    }

    // In ra dãy sau khi xóa số nguyên tố
    std::cout << "Day sau khi xoa cac so nguyen to: ";
    for (const int& phanTu : daySo) {
        std::cout << phanTu << " ";
    }
    std::cout << std::endl;

    return 0;
}

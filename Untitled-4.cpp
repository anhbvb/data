#include <iostream>
#include <vector>

int main() {
    // Khai báo biến lưu số lượng phần tử và vector để lưu dãy
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

    // Nhập phần tử x và vị trí k
    int x, k;
    std::cout << "Nhap phan tu x can chen: ";
    std::cin >> x;
    std::cout << "Nhap vi tri k can chen: ";
    std::cin >> k;

    // Chèn phần tử x vào vị trí k
    if (k >= 0 && k <= n) {
        daySo.insert(daySo.begin() + k, x);


        // In ra dãy phần tử đã chèn
        
        std::cout << "Day phan tu sau khi chen: ";
        for (const int& phanTu : daySo) {
            std::cout << phanTu << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Vi tri k khong hop le!" << std::endl;
    }
    // system("pause");
    

    return 0;
}

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr;
    int n, k, x;

    std::cout << "- Nhap so luong phan tu (N): ";
    std::cin >> n;

    std::cout << "- Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "- Phan tu thu " << i + 1 << ": ";
        std::cin >> num;
        arr.push_back(num);
    }

    std::cout << "- Nhap so nguyen x: ";
    std::cin >> x;

    std::cout << "- Nhap so nguyen k (1 <= k <= " << n + 1 << "): ";
    std::cin >> k;

    if (k >= 1 && k <= n + 1) {
        arr.insert(arr.begin() + k - 1, x);

        std::cout << "- Day so sau khi chen " << x << " vao truoc phan tu thu " << k << ":";
        for (int i = 0; i < arr.size(); ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "- Vi tri k khong hop le." << std::endl;
    }

    return 0;
}



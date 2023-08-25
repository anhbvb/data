#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <chrono>

int main() {
    srand(time(NULL));

    std::vector<int> arr;
    int n, m;

    // N = 10, M = 10
    n = 10;
    m = 10;
    auto start_time = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < n; ++i) {
        int num = rand() % 100 + 1;
        arr.push_back(num);
    }
    for (int i = 0; i < m; ++i) {
        int type = rand() % 2 + 1;
        if (type == 1) {
            int k = rand() % (n + 1) + 1;
            int x = rand() % 100 + 1;
            if (k == 1) {
                arr.insert(arr.begin(), x);
            } else if (k == n + 1) {
                arr.push_back(x);
            } else {
                arr.insert(arr.begin() + k - 1, x);
            }
        } else if (type == 2 && !arr.empty()) {
            int k = rand() % n + 1;
            arr.erase(arr.begin() + k - 1);
        }
        
        std::cout << "Day so sau lan thuc hien thu " << i + 1 << ":\n";
        for (int j = 0; j < arr.size(); ++j) {
            std::cout << arr[j] << " ";
        }
        std::cout<< std::endl;
        std::cout << std::endl;
    }
    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    std::cout << "Thoi gian thuc thi voi N = " << n << ", M = " << m  <<" la: " << duration << " micro giay" << std::endl;

    return 0;
}

#include <stdio.h>

// Hàm hoán đổi giữa hai phần tử
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp chọn trực tiếp
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i; // Giả sử phần tử hiện tại là nhỏ nhất

        // Tìm phần tử nhỏ nhất trong phần chưa được sắp xếp
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Cập nhật chỉ số phần tử nhỏ nhất
            }
        }

        // Đưa phần tử nhỏ nhất vào đầu phần chưa được sắp xếp
        swap(&arr[i], &arr[minIndex]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    selectionSort(arr, n);

    printf("\nMang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

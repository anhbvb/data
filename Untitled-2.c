#include <stdio.h>

// Hàm để chèn phần tử x vào trước phần tử thứ k của mảng
void insertElement(int arr[], int *size, int k, int x) {
    if (k < 0 || k > *size) {
        printf("Vi tri k khong hop le.\n");
        return;
    }

    // Tăng kích thước mảng
    (*size)++;

    // Dịch các phần tử từ k đến cuối mảng sang phải để tạo chỗ cho x
    for (int i = *size - 1; i > k; i--) {
        arr[i] = arr[i - 1];
    }

    // Chèn phần tử x vào vị trí k
    arr[k] = x;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/ sizeof(arr[0]);

    printf("Mang truoc khi chen: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    int k = 2; // Vị trí muốn chèn phần tử vào
    int x = 25; // Phần tử muốn chèn

    insertElement(arr, &size, k, x);

    printf("\nMang sau khi chen: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nhappy ");
    
    return 0;
}

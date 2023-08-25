#include <stdio.h>

int linear_search(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;  // Trả về vị trí của phần tử nếu tìm thấy
        }
    }
    ret#include <stdio.h>

void interchange_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                // Hoán đổi phần tử
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int my_array[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(my_array) / sizeof(my_array[0]);

    interchange_sort(my_array, size);

    printf("Danh sách sau khi sắp xếp: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", my_array[i]);
    }

    return 0;
}
urn -1;  // Trả về -1 nếu không tìm thấy phần tử
}

int main() {
    int a[] = {4, 2, 8, 5, 1, 7, 6, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 5;


    if (   linear_search(a, n, x) != 1) {
        printf("Phần tử %d được tìm thấy tại vị trí %d.\n", x, linear_search(a, n, x));
    } else {
        printf("Phần tử %d không tồn tại trong danh sách.\n", x);
    }

    return 0;
}

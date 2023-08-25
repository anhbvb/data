#include <stdio.h>

int interchange_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                // Hoán đổi phần tử
                int temp = arr[i];
                arr[i] = arr[j];n
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

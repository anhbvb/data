#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số chính phương
int isPerfectSquare(int n) {
    int sqrtn = sqrt(n);
    return (sqrtn * sqrtn == n);
}

// Hàm kiểm tra số nguyên tố
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int size; // Kích thước của dãy

    printf("Nhap so luong phan tu trong day: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Kich thuoc day khong hop le.\n");
        return 1; // Kết thúc chương trình với mã lỗi
    }

    int a[size]; // Mảng để lưu dãy số

    printf("Nhap cac phan tu trong day:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d so ban da nhap: \n", size);
    for (int i = 0; i < size; i++) {
        printf("%d", a[i]);
        if (i < size - 1) {
            printf(", "); // In dau phay va khoang trang neu khong phai so cuoi cung
        }
    }

    int sum = 0;
    int max = a[0];
    int min = a[0];
    int scp = 0;
    int snt = 0;

    // Lặp qua dãy số để tính tổng, tìm giá trị lớn nhất, giá trị nhỏ nhất, số chính phương và số nguyên tố
    for (int i = 0; i < size; i++) {
        sum += a[i];
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
        if (isPerfectSquare(a[i])) {
            scp++;
        }
        if (isPrime(a[i])) {
            snt++;
        }
    }


    // In ra kết quả
    printf("\nTong cua day so: %d\n", sum);
    printf("Gia tri trung binh: %.2f\n", (float) sum / size);
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
    printf("Day so chinh phuong: ");
    for (int i = 0; i < size; i++) {
        if (isPerfectSquare(a[i])) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    printf("Day so nguyen to: ");
    for (int i = 0; i < size; i++) {
        
        if (isPrime(a[i])) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    return 0;
}

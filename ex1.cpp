#include <stdio.h>
#include <string.h>
#include <math.h>

int isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char input[1000]; // Dung de luu chuoi dau vao
    int numbers[1000]; // Dung de luu cac so nguyen
    int numCount = 0; // Dem so luong so da doc
    int sum = 0; // Biến để tính tổng
    int maxNumber = 0; // Biến để lưu số lớn nhất, khởi tạo bằng giá trị đủ nhỏ
    int minNumber = 0; // Biến để lưu số nhỏ nhất, khởi tạo bằng giá trị đủ nhỏ
    
    printf("Nhap cac so nguyen:\n");
    fgets(input, sizeof(input), stdin); // Doc mot dong dau vao

    char *token = strtok(input, " "); // Tach chuoi thanh cac token bang khoang trang
    while (token != NULL) {
        sscanf(token, "%d", &numbers[numCount]); // Chuyen token thanh so nguyen
        sum += numbers[numCount]; // Cộng giá trị của số vào biến tổng
        
        if (numbers[numCount] > maxNumber) {
            maxNumber = numbers[numCount]; // Nếu số mới lớn hơn số lớn nhất hiện tại, cập nhật maxNumber
        }
        if (numbers[numCount] < minNumber) {
            minNumber = numbers[numCount]; // Nếu số mới nhỏ hơn số nhỏ nhất hiện tại, cập nhật minNumber
        }
        
        
        numCount++;
        token = strtok(NULL, " ");
    }
    // if (numCount > 0) {
    //     average = (float) sum / numCount; // Tính giá trị trung bình
    // }
    printf("Cac so ban da nhap: ");
    for (int i = 0; i < numCount; i++) {
        printf("%d", numbers[i]);
        if (i < numCount - 1) {
            printf(", "); // In dau phay va khoang trang neu khong phai so cuoi cung
        }
    }
    printf("\n");
    printf("tong cac so vua nhap la: %d\n", sum);
    printf("gia tri trung binh day so vua nhap la: %.2f\n", (float) sum / numCount);
    printf("So lon nhat la: %d\n", maxNumber);
    printf("So nho nhat la: %d\n", minNumber);

    // for (int i = 0; i < numCount; i++) {
    //     if (isPerfectSquare(numbers[i])) {
    //         printf("So %d la so chinh phuong.\n", numbers[i]);
    //     }
    //     if (isPrime(numbers[i])) {
    //         printf("So %d la so nguyen to.\n", numbers[i]);
    //     }
    // }

    printf("Day so chinh phuong: ");
    for (int i = 0; i < numCount; i++) {
        if (isPerfectSquare(numbers[i])) {
            printf("%d ", numbers[i]);
        }
    }

    printf("\nDay so nguyen to: ");
    for (int i = 0; i < numCount; i++) {
        if (isPrime(numbers[i])) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\nmfkfbfbn kvkvkb");

    return 0;
}


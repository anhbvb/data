#include <stdio.h>
#include <string.h>

int main() {
    char input[1000]; // Dung de luu chuoi dau vao
    int numbers[1000]; // Dung de luu cac so nguyen
    int numCount = 0; // Dem so luong so da doc
    int sum = 0; // Biến để tính tổng

    printf("Nhap cac so nguyen (nhan Enter de ket thuc):\n");
    fgets(input, sizeof(input), stdin); // Doc mot dong dau vao

    char *token = strtok(input, " "); // Tach chuoi thanh cac token bang khoang trang
    while (token != NULL) {
        sscanf(token, "%d", &numbers[numCount]); // Chuyen token thanh so nguyen
        sum += numbers[numCount]; // Cộng giá trị của số vào biến tổng
        numCount++;
        token = strtok(NULL, " ");
    }

    printf("Cac so ban da nhap: ");
    for (int i = 0; i < numCount; i++) {
        printf("%d", numbers[i]);
        if (i < numCount - 1) {
            printf(", "); // In dau phay va khoang trang neu khong phai so cuoi cung
        }
    }
    printf("\n");
    printf("Tong cac so vua nhap la: %d\n", sum);

    return 0;
}
//#include <stdio.h>
//
//int main() {
//    char buffer[100]; // Mảng để lưu dòng văn bản
//    printf("Nhập một dòng văn bản: ");
//    fgets(buffer, sizeof(buffer), stdin); // Đọc một dòng văn bản từ bàn phím
//
//    printf("Dòng bạn vừa nhập: %s", buffer);
//
//    return 0;
//}

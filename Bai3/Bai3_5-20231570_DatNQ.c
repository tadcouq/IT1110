// 2024/04/05 20:14:30 GMT+7 (c) https://tdcq.me/
#include <stdio.h>
#include <math.h>

// Có sử dụng trị tuyệt đối và cos(y) trong biểu thức, triển khai thư viện math.h
// Để tránh rối input, kéo phần tính ra thành 1 phần void function riêng

void cal(float x, float y, float z) {
    float F = ((x+y+z)/(x^2+y^2+1)) + fabs(x-z*cos(y));
    printf("Gia tri cua F la: %.2f\n", F);
}

int main() {
    float x, y, z;

    // Nhập x, y, z
    printf("Nhap x: ");
    scanf("%f", &x);
    printf("Nhap y: ");
    scanf("%f", &y);
    printf("Nhap z: ");
    scanf("%f", &z);

    // Tính và in kết quả
    cal(x, y, z);

    return 0;
}

// 2024/04/05 19:55:39 GMT+7 (c) https://tdcq.me/
#include <stdio.h>
#define PI 3.14159

// Kiểm tra tính hợp lệ của input và tính chu vi diện tích hình tròn
void checkCircle(float r) {
    if (r > 0) {
        // Tính chu vi và diện tích hình tròn
        float chuvi = 2 * PI * r;
        float dientich = PI * r * r;
        printf("Chu vi cua hinh tron la: %.2f\n", chuvi);
        printf("Dien tich cua hinh tron la: %.2f\n", dientich);
    } else {
        printf("Ban kinh hinh tron phai lon hon 0.\n");
    }
}

int main() {
    float r;

    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);

    checkCircle(r);

    return 0;
}
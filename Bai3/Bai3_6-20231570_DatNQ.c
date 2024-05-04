// 2024/04/05 20:22:07 GMT+7 (c) https://tdcq.me/
#include <stdio.h>
#include <math.h>

// Biểu thức khá dài, phân thành void function riêng cho dễ nhìn
void cal(float x, float y) {
    float F = y^6 + x*y^5 + x^2*y^4 + x^3*y^3 + x^4*y^2 + x^5*y + x^6;
    printf("Gia tri cua F la: %.2f\n", F);
}

int main() {
    float x, y;

    printf("Nhap x: ");
    scanf("%f", &x);
    printf("Nhap y: ");
    scanf("%f", &y);

    cal(x, y);

    return 0;
}

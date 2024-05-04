// 2024/04/05 20:01:27 GMT+7 (c) https://tdcq.me/
#include <stdio.h>
#include <math.h>

int main(){
    int x,y;
    float A,B,C;

    // Nhập giá trị cho x, y
    printf("Nhap gia tri cho x: ");
    scanf("%d", &x);
    printf("Nhap gia tri cho y: ");
    scanf("%d", &y);

    // Tính A, B, C
    A=x^2+y^2;
    B=(x+y)^2;
    C=(x-y)^2;

    // In kết quả
    printf("A = %f\n", A);
    printf("B = %f\n", B);
    printf("C = %f\n", C);

    return 0;
}
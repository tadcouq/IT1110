// 2024/05/04 19:44:39 GMT+7 (c) https://tdcq.me/
#include <stdio.h>
#include <math.h>

int main() {
    float toan, ly, hoa, total, avg;

    // Nhập điểm
    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);
    
    printf("Nhap diem mon Ly: ");
    scanf("%f", &ly);
    
    printf("Nhap diem mon Hoa: ");
    scanf("%f", &hoa);

    // Tính tổng điểm, điểm trung bình
    total = toan + ly + hoa;
    avg = total / 3;

    // In kết quả
    printf("Tong diem 3 mon: %.2f\n", total);
    printf("Diem trung binh: %.2f\n", avg);

    return 0;
}


// 2024/04/05 20:07:19 GMT+7 (c) https://tdcq.me/
#include <stdio.h>

// Với 3 input là giá chưa thuế, cân nặng cần mua, phần trăm thuế, có thể đưa về code đơn giản ko cần math.h

int main() {
    float pricenonTax, weight, tax;
    float total;

    // Nhập giá chưa thuế, cân nặng cần mua, phần trăm thuế
    printf("Nhap gia ca chua chua tinh thue: ");
    scanf("%f", &pricenonTax);
    printf("Nhap can nang can mua: ");
    scanf("%f", &weight);
    printf("Nhap phan tram thue: ");
    scanf("%f", &tax);

    // Tính tổng tiền cần trả
    total = pricenonTax * weight * (1 + tax / 100);

    // In kết quả
    printf("Tong tien can tra: %.2f\n", total);

    return 0;
}


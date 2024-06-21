/*
2024/06/20 (c) https://tdcq.me/

Đề bài:
Nhập mảng n số nguyên từ bàn phím, in ra màn hình các giá trị từ cuối đến giá trị đầu, sau đó tính tổng các phần tử của mảng.
Chú ý:
Nếu n <= 0 in "Error"

    Mô tả giá trị đầu vào:
Dòng đầu tiên chứa số nguyên dương n và là độ dài của mảng đầu vào.
Dòng thứ hai chứa n số nguyên.

    Mô tả giá trị đầu ra:
Dòng đầu tiên là các phần tử của mảng được in theo thứ tự đảo ngược.
Dòng đầu ra thứ hai là tổng các phần tử của mảng

For example:

Dữ liệu đầu vào	    |Kết quả
5                   |5 4 3 2 1
1 2 3 4 5           |15
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main() {
    int n;
    int A[MAX]; B[MAX];
    /* parameter(các tham số trong hàm): 
    A: mảng chứa số phần tử được người dùng nhập vào
    B: mảng phụ để lưu số phần tử đảo ngược của mảng A
    n: số phần tử mảng người dùng nhập vào
    */
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error");
        return 0;
    }
    // Nhập mảng A
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    // Đảo ngược A thành các phần tử của mảng B
    for (int i = 0; i < n; i++) {
        B[i] = A[n - i - 1];
    }
    // In ra mảng B
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    // Tính tổng các phần tử của mảng A
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i];
    } 
    printf("\n%d", sum);
    return 0;
}   

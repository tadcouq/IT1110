// 2024/23/05 21:27:13 GMT+7 (c) https://tdcq.me/
/*
Viết chương trình tính các tổng sau: 
    a) S1=1+x+x^2+x^3+⋯+x^n
    b) S2=1-x+x^2-x^3+⋯+(-1)^n.x^n
    c) S3=1+x/1!+x^2/2!+x^3/3!+⋯+x^n/n!
Trong đó n là một số nguyên dương và x là một số thực bất kỳ được nhập từ bàn phím khi chạy chương trình. 
Chú ý: Sử dụng vòng lặp while. Kiểm tra dữ liệu đầu vào của chương trình, nếu không đúng thì kết thúc chương trình và in ra màn hình Error.
Mô tả dữ liệu đầu vào:
Số nguyên dương n
Số thực x

Mô tả dữ liệu đầu ra:
Giá trị của S

For example:
    Dữ liệu đầu vào	|Kết quả
    1               |(S1) 2.500000
    1.5             |(S2) ...
                    |(S3) ...

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    float x;
    scanf("%d%f", &n, &x);
    if (n <= 0)
    {
        printf("ERROR");
        exit(0);
    }
    float S1 = 0, S2 = 0, S3 = 0;
    int i = 0;
    float temp = 1;
    while (i <= n)
    {
        S1 += pow(x, i);
        S2 += pow(-1, i) * pow(x, i);
        S3 += pow(x, i) / temp;
        i++;
        temp *= i;
    }
    printf("%.6f\n", S1);
    printf("%.6f\n", S2);
    printf("%.6f\n", S3);
    return 0;
}
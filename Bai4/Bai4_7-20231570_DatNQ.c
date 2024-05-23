// 2024/23/05 21:40:40 GMT+7 (c) https://tdcq.me/
// lười viết lại đề quá, ựa

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double S = 0, x;
    int n, i = 1;

    scanf("%lf", &x);
    scanf("%d", &n);
    if (n < 1 || x < 0)
    {
        printf("Error");
        exit(0);
    }
    for (i = 1; i <= n; i++)
        {
            S = sqrt(x + S);
        }
    
    printf("%.4lf", S);
    return 0;
}
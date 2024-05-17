// 2024/04/05 20:01:27 GMT+7 (c) https://tdcq.me/

#include<stdio.h>

int main(){
    float x, y;
    scanf("%f%f", &x, &y);
    printf("%f\n%f\n%f", x*x + y*y, (x+y)*(x+y), (x-y)*(x-y));
    return 0;
}

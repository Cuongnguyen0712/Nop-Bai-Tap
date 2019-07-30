//Nhập vào 3 số là 3 cạnh của tam giác, nếu không phải 3 cạnh 1 tam giác bắt nhập lại cho đúng
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap A: ");
    scanf("%d", &a);
    printf("Nhap B: ");
    scanf("%d", &b);
    printf("Nhap C: ");
    scanf("%d", &c);

    while (a+b<=c || a+c<=b || b+c<=a)
    {
        printf("=> A,B,C Khong Phai La Tam Giac \n");
        printf("=> Nhap Lai A,B,C: \n");
        printf("Nhap a: ");
        scanf("%d", &a);
        printf("Nhap b: ");
        scanf("%d", &b);
        printf("Nhap c: ");
        scanf("%d", &c);
    }
    printf("=> A,B,C La Tam Giac");


    return 0;
}
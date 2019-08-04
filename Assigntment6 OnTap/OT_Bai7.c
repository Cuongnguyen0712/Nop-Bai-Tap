#include <stdio.h>
int main () {
    int n;
    printf("Nhap Vao N: ");
    scanf("%d",&n);
    int kq=1;
    for (int i=1;i<=n;i++) {
        kq = kq * i; 
    }
    printf("=> n! = %d",kq);
}
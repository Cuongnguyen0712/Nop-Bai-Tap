#include <stdio.h>
int main () {
    int x;
    printf("Nhap So N: ");
    scanf("%d",&x);
    int n[x];
    int Tong=0;
    int Dem=0;
    int TB;
    for (int i=0;i<x;i++) {
        printf("Nhap So Thu [%d]: ",i);
        scanf("%d",&n[i]);
        Tong = Tong +n[i];
        Dem++;
    }
    TB=Tong/Dem;
    printf("=> Tong = %d \n",Tong);
    printf("=> Trung Binh Cong = %d",TB);
}
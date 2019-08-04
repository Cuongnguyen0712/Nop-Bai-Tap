//Nhập vào 1 mảng 10 số nguyên. Tìm giá trị trung bình của mảng.
#include <stdio.h>
int main() {
    int n[10];
    int Tong=0;
    int i;
    for (i=0;i<10;i++) {   
    printf("Nhap So Nguyen N [%d]: ",i);
    scanf("%d",&n[i]);
    Tong = Tong + n[i];
    }
    printf("=> Tong = %d \n",Tong);
    printf("=> Trung Binh = %d",Tong/i);
    return 0;
}
//Tìm số lớn nhất trong mảng
#include <stdio.h>
int tim_so_lon_nhat (int n[],int x) //Nhận tham số n[] và x của Main
{
    int max;
    max=n[0];
    for (int i=0;i<x;i++) {
        if (n[i]>max) {
            max = n[i];
        }
    }
    return max;
}

int main () {
    int x;
    int max;
    int n[x];
    printf("Nhap So N: ");
    scanf("%d",&x); //Nhap vao X => Đưa tham số X lên tim_so_lon_nhat ^
    for (int i=0;i<x;i++) {
        printf("Nhap So Thu [%d]: ",i);
        scanf("%d",&n[i]); //Nhap vao n[i] => Đưa tham số n[](n[i]) lên tim_so_lon_nhat ^
    }
    printf("=> Max: %d\n",tim_so_lon_nhat(n,x));
    return 0;
}
//Tìm số lớn nhất trong mảng
#include <stdio.h>
int tim_so_gan_max (int n[],int x) //Nhận tham số n[] và x của Main
{
    int max;
    max=n[0];
    for (int i=0;i<x;i++) {
        if (n[i]>max) {
            max = n[i];
        }
    }
    int n_max=n[0];
    for (int i = 0; i < x; ++i)
	{
        if(max == n[0]){
			n_max = n[1];
		}
        if(n_max < n[i] && n[i] < max){
			n_max = n[i];
		}
    }
    return n_max;
}

int main () {
    int x;
    int max;
    int n_max;
    int n[x];
    printf("Nhap So N: ");
    scanf("%d",&x); //Nhap vao X => Đưa tham số X lên tim_so_lon_nhat ^
    for (int i=0;i<x;i++) {
        printf("Nhap So Thu [%d]: ",i);
        scanf("%d",&n[i]); //Nhap vao n[i] => Đưa tham số n[] lên tim_so_lon_nhat ^
    }
    printf("=> Gan Max: %d\n",tim_so_gan_max(n,x));
    return 0;
}
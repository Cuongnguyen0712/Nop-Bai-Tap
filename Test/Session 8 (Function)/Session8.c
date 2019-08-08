#include <stdio.h>
int tinh_tong(int a,int b) {
    int c=a+b;
    return c;
}

void in_ra_binh_phuong(int a) {
    int a2 = a*a;
    printf("Binh Phuong = %d\n",a2);
}

int main () {
    int x=10,y=20;
    int z = tinh_tong(x,y);
    printf("Tong = %d\n",z);

    in_ra_binh_phuong(z);

    return 0;
}
//Nhập vào N phần tử => nhập số phần tử và in ra max - min và gần max - gần min
#include <stdio.h>

int main(){
    int n;
    printf("Nhap So Phan Tu \n");
    scanf("%d",&n);
    int a[n];
    if (n>0) {
        for (int i = 0; i < n; ++i) {
            printf("Nhap phan tu [%d] \n",i);
            scanf("%d", &a[i]);
        }
        int max, min;
        max = a[0];
        min = a[0];
        for (int i = 0; i < n; ++i) {
            if (max < a[i]) {
                max = a[i];
            }
            if (min > a[i]) {
                min = a[i];
            }
        }
        int gmax, gmin;
        gmax = a[0];
        gmin = a[0];
        for (int i = 0; i < n; ++i) {
            if (max == a[0]) {
                gmax = a[1];
            }
            if (min == a[0]) {
                gmin = a[1];
            }

            if (gmax < a[i] && a[i] < max) {
                gmax = a[i];
            }
            if (gmin > a[i] && a[i] > min) {
                gmin = a[i];
            }
        }
        printf("Gia tri max: %d\n", max);
        printf("Gia tri gan max: %d\n", gmax);
        printf("Gia tri min: %d\n", min);
        printf("Gia tri gan min: %d\n", gmin);
    } else {
        printf("Nhap Sai Gia Tri");
    }
    return 0;
}
#include <stdio.h>
int main () {
    int x;
    printf("Nhap So N: ");
    scanf("%d",&x);
    int n[x];
    for (int i=0;i<x;i++) {
        printf("Nhap So Thu [%d]: ",i);
        scanf("%d",&n[i]);
    }
    int max,min;
    max=n[0];
    min=n[0];
    for (int i=0;i<x;i++) {
        if (n[i]>max) {
            max = n[i];
        }
        if (n[i]<min) {
            min = n[i];
        }
    }
  
    printf("=> Max: %d\n",max);
    printf("=> Min: %d",min);
    return 0;
}
#include <stdio.h>
int main () {
    int x;
    printf("Nhap So N: ");
    scanf("%d",&x);
    int n[x];
    for (int i=0;i<x;i++) {
        printf("Nhap So Thu [%d]: ",i+1);
        scanf("%d",&n[i]);
    } 
    printf("=> Mang: ");
    for (int i=0;i<x;i++) {
        printf("%d ",n[i]);
    }
}
#include <stdio.h>
int main() {
    int x;
    printf("Nhap So Phan Tu: ");
    scanf("%d",&x);
    int n[x];
    int i;  
    for (i=0; i<x; i++) {
    printf("Nhap Vao So Thu [%d]: ",i);
    scanf("%d",&n[i]);
    }

    
    return 0;
}
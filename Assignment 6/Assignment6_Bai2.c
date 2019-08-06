#include <stdio.h>
int main() {
    int x;
    printf("Nhap So Phan Tu: ");
    scanf("%d",&x);
    int n[x];
    int i;  

    for (i=0; i<x; i++) {
        printf("Nhap So Thu [%d]: ",i);
        scanf("%d",&n[i]);
        int j=0;
        while (j<i)
        {
            if (n[i]==n[j]) {
                printf("=> Trung Nhap Lai: ",i);
                scanf("%d",&n[i]);
                j=0;
            } else {
                j++;
            }
        }        
    }
    return 0;
}
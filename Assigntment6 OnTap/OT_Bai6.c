#include <stdio.h>
int main () {
    int n;
    printf("Nhap Vao N: ");
    scanf("%d",&n);
    float S=1;
    for (int i=2; i<=n;i++) {
        S=S+1/(float)i;
    }
    printf("Ket Qua = %f",S);
}
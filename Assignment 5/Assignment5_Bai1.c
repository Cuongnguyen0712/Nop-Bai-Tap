#include <stdio.h>

int main () {
    int n;
    int x1=1,x2=1,x3=2;
    printf("Nhap So N: \n");
    scanf("%d",&n);
    for (int i=4;i<=n;i++)
    {
        x1=x2;
        x2=x3;
        x3=x1+x2;
    }
    printf("So Fibonaci Thu [%d] = %d\n",n,x3);

    return 0;
}
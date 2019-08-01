//Nhập vào số n, in ra các số thuận nghịch < n
#include <stdio.h>

int main(){
    int n;
    printf("Nhap So N: \n");
    scanf("%d",&n);
    for (int x; x<n; x++)
    {
        int m = x, count = 0;
        while (m != 0) {
            count = count * 10 + m % 10;
            m /= 10;
        }
        if (count == x) {
            printf("[%d] La So Thuan Nghich < [%d] \n", x,n);
        }
    }
    return 0;
}
//Nhập vào số n, kiểm tra xem có phải số thuận nghịch
#include <stdio.h>

int main(){
    int n;
    printf("Nhap So N: \n");
    scanf("%d",&n);
    int m=n,count=0;
    while (m!=0)
    {
        count=count*10+m%10;
        m/=10;
    }
    if (count==n)
    {
        printf("[%d] La So Thuan Nghich",n);
    } else {
        printf("[%d] Khong La So Thuan Nghich",n);
    }

    return 0;
}
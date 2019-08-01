//Nhập vào số n, tìm các số nguyên tố < n
#include <stdio.h>

int main(){
    int n;
    printf("Nhap So N: \n");
    scanf("%d",&n);
    for (int i = 1; i <= n ; ++i)
    {
        int Uc=0;
            for (int j = 1; j <= i; ++j)
        {
            if (i % j == 0) {
                Uc++;
            }
        }
        if(Uc == 2){
            printf("=> [%d] La So la so nguyen to < [%d]\n",i,n);
        }
    }
    return 0;
} 
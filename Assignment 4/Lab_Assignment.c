//Nhập 1 số nguyên n từ bàn phím và kiểm tra xem nó có phải số nguyên tố hay không
#include <stdio.h>

int main(){
    int n;
    printf("Nhap So N: \n");
    scanf("%d",&n);
    int Uc=0;
    for (int i = 1; i <= n; ++i)
    {
        if(n%i == 0){
            printf("Uoc La: %d \n",i);
            Uc++;
        }
    }

    if(Uc == 2){
        printf("=> [%d] La So la so nguyen to\n",n);
    }else{
        printf("=> [%d] Khong la so nguyen to\n",n);
    }

    return 0;
}
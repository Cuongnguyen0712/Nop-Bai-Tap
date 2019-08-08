//Nhập vào số n, tìm các số nguyên tố < n
#include <stdio.h>
#include <stdbool.h>

bool ktra_so_nguyen_to(int n) {
    if (n<2) return false;
    if (n==2) return true;
    for (int i=2;i<n;i++)
    {
        if(n%2==0)
        {
            return false;
        }
    }
        return true;
}


int main(){
    int n;
    printf("Nhap So N: ");
    scanf("%d",&n);

    for (int i=0;i<n;i++) {
        if(ktra_so_nguyen_to(i)) {
            printf("%d La So Nguyen To\n",i);
        }
    }
    if (ktra_so_nguyen_to(n)) {
        printf("%d La So Nguyen To\n",n);
    } else {
        printf("%d Khong La So Nguyen To\n",n);
    }
    
    return 0;
}
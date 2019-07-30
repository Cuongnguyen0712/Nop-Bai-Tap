//Nh?p 1 s?, ki?m tra xem có ph?i s? hoàn h?o
#include<stdio.h>

int main()
{
    int n;
    printf("Nhap vao so n: \n");
    scanf("%d",&n);
    int Tongi=0;
    for(int i=1;i<n;i++)
    {
        if (n % i == 0) {
            printf("Uoc La: %d \n",i);
            Tongi = Tongi + i;

        }
    }
    if(Tongi==n) {
        printf("=> [%d] La So Hoan Hao \n",n);
    }
    else {
        printf("=> [%d] Khong La So Hoan Hao \n",n);
    }
    return 0;
}

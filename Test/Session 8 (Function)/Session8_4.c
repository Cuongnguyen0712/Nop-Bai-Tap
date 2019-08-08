//Nhập 1 số, tạo hàm kiểm tra số hoàn hảo và in số nghịch đảo
#include<stdio.h>
#include<stdbool.h>

bool ktra_hoan_hao(int n) {
    int Tongi=0;
    for(int i=1;i<n;i++)
    {
        if (n % i == 0) {
            Tongi = Tongi + i;
        }
    }
    if (Tongi==n) {
        return true;
    }
    return false;
}
int tim_so_nghich_dao(int n) {
    int s=0;
    while (n!=0)
    {
        s=s*10+n%10;
        n/=10;
    }
    return s;
    
} 

int main()
{
    int n;
    printf("Nhap vao n: \n");
    scanf("%d",&n);
    if(ktra_hoan_hao(n)) {
        printf("%d la so hoan hao\n",n);
    }
    printf("So nghich dao cua %d la %d\n",n,tim_so_nghich_dao(n));
    
    return 0;
}

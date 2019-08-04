#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,C;
    double  P,S;
    printf("Nhap so [a]:\n");
    scanf("%d",&a);
    printf("Nhap So [b]:\n");
    scanf("%d",&b);
    printf("Nhap So [c]:\n");
    scanf("%d",&c);
    C = a+b+c; //Chu Vi
    P = (double)C/2; 
    S =  sqrt(P*(P-a)*(P-b)*(P-c)); //Dien Tich
    if(a+b > c && b+c > a && c+a > b){
        printf("[%d] [%d] [%d] La 3 Canh Cua Tam Giac\n",a,b,c);
        printf("=> Dien Tich Tam Giac = %lf\n",S );
        printf("=> Chu vi Tam Giac = %d\n",C );
    }else{
        printf("[%d] [%d] [%d] Khong Phai 3 Canh Cua Tam Giac\n",a,b,c);
    }
    return 0;
}

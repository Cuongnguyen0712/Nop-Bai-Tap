#include <stdio.h>
 int main () {
       int a,b,c;
       printf("Nhap Canh Thu 1: ");
       scanf("%d",&a);
       printf("Nhap Canh Thu 2: ");
       scanf("%d",&b);
       printf("Nhap Canh Thu 3: ");
       scanf("%d",&c);
      int D;
      double P,S;
            D=a+b+c;
            P= (double)D/2;
            S=sqrt(P*(P-a)*(P-b)*(P-c));
      if (a+b>c && a+c>b && b+c>a ) {
            printf("=> Day La 3 Canh Cua Tam Giac");
            printf("=> Chu Vi: %d \n",D);
            printf("=> Dien Tich: %f \n",S);
      } else
      {
            printf("Khong Phai 3 Canh Cua Tam Giac");
      }
      
       return 0;
 }
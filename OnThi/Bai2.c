//Chương trình nhập vào 2 số nguyên và in ra thương nếu số thứ nhất > số thứ 2 và in ra tích nếu ngược lại
#include <stdio.h>

int main () {
      int a,b;
      printf("Nhap So 1: \n");
      scanf("%d",&a);
      printf("Nhap So 2: \n");
      scanf("%d",&b);      
      if (a>b) {
            printf("Thuong %d / %d = %d",a,b,a/b);
      }
      if (a<b) {
            printf("Tich %d x %d = %d",a,b,a*b);
      }

      return 0;
}
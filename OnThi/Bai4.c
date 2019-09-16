#include <stdio.h>
#include <math.h>
int main () {
      int a,b,c;
      float x1,x2,x1x2;
      printf("Nhap A: \n");
      scanf("%d",&a);
      printf("Nhap B: \n");
      scanf("%d",&b);
      printf("Nhap C: \n");
      scanf("%d",&c);
      int Delta;
      Delta=(b*b)-(4*a*c);
      x1 = (-b+sqrt(Delta))/(2*a);
      x2 = (-b-sqrt(Delta))/(2*a);
      x1x2= -b/(2*a);
      if (Delta<0) {
            printf("Phuong Trinh Vo Nghiem \n");
      } else if (Delta==0) {
            printf("Phuong Trinh Co Nghiem Kep: x1=x2= %f",x1x2);
      } else {
            printf("Phuong Trinh Co 2 Nghiem Phan Biet: x1=%f - x2=%f",x1,x2);
      }

      return 0;
}
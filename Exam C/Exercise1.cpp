#include <stdio.h>

int main () {
      int a,b,c;
      printf("Input Number A: ");
      scanf("%d",&a);
      printf("Input Number B: ");
      scanf("%d",&b);
      printf("------------------------\n");
      printf("Sum Input Number: 0\n");
      printf("Substraction Input Number: 1\n");
      printf("Multiplication Input Number: 2\n");
      printf("Division Input Number: 3\n");
      printf("------------------------\n");
      printf("Select the calculation: ");
      scanf("%d",&c);
      if (c==0) {
            printf("Sum = %d\n",a+b);
      }
      if (c==1) {
            printf("Substraction = %d\n",a-b);
      }
      if (c==2) {
            printf("Multiplication = %d\n",a*b);
      }
      if (c==3) {
            printf("Division = %f\n",(float)a/b);
      }
      
      return 0;
}
#include <stdio.h>
int main () {
      int a;
      printf("Nhap So: ");
      scanf("%d",&a);
      int uc=0;
      for (int i=1;i<=a;i++)
      {
            if (a%i==0) {
                  uc++;
            }
      }
      if (uc==2) {
            printf("La so nguyen to \n");
      }
      else {
            printf("Khong la so nguyen to \n");
      }

      return 0;
}
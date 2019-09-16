#include <stdio.h>

int main () {
      int n;
      printf("Nhap So: ");
      scanf("%d",&n);

      int tong=0;
      for (int i = 1; i < n; i++)
      {
            if (n%i==0) {
                  tong=tong+i;
            }
      }
      if (tong==n) {
            printf("La So Hoan Hao\n");
      } else
      {
            printf("Khong La So Hoan Hao\n");
      }
      
      

      return 0;
}
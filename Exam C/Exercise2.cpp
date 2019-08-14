#include <stdio.h>

int main () {
      int n[10];
      for (int i = 0; i < 10; i++)
      {
            printf("Input Number [%d]: ",i+1);
            scanf("%d",&n[i]);
      }
      int Sum=0;
      printf("Result:");
      for (int i = 9; i >= 0; i--)
      {
            Sum=Sum+n[i];
            printf("%3d",n[i]);
      }
      printf("\nSum = %d",Sum);
      
      
      return 0;
}
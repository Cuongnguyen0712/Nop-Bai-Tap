// Nhập vào 3 số tìm max, min.
#include <stdio.h>
int main () {
      int a,b,c;
      printf("Nhap So 1: \n");
      scanf("%d",&a);
      printf("Nhap So 2: \n");
      scanf("%d",&b);
      printf("Nhap So 3: \n");
      scanf("%d",&c);
      int max,min;
      max=a;
      if (max<b) max=b;
      if (max<c) max=c;
      min=a;
      if (min>b) min=b;
      if (min>c) min=c;
      printf("Max: %d \n",max);
      printf("Min: %d \n",min);
      
      return 0;
}
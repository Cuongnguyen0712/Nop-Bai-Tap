#include <stdio.h>

int main () {
      int x;
      printf("Nhap Mang: \n");
      scanf("%d",&x);
      int n[x];
      for (int i = 0; i <= x; i++)
      {
            printf("Nhap So Thu [%d]: \n",i);
            scanf("%d",&n[i]);
      }
      int tb;
      int tong=0;
      int dem=0;
      for (int i = 0; i <= x; i++)
      {     
            tong=tong+n[i];
            dem++;
            tb=tong/dem;
      }
      printf("Tong: %d \n",tong);
      printf("Trung binh: %d",tb);
      


      return 0;
}
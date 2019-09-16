#include <stdio.h>

int main () {
      int n[4][4];
      for (int i = 0; i < 4; i++)
      {
            for (int j = 0; j < 4; j++)
            {
                  printf("Nhap So Thu [%d][%d]: ",i,j);
                  scanf("%d",&n[i][j]);
            }
            
      }

      for (int i = 0; i < 4; i++)
      {
            for (int j = 0; j < 4; j++)
            {
                  printf("%5d",n[i][j]);                  
            }
            printf("\n");
            
      }
      int tong=0;
      int dem=0;
      float tb;
      for (int i = 0; i < 4; i++)
      {
            for (int j = 0; j < 4; j++)
            {
                  if (i==j) {
                        tong=tong+n[i][j];
                        dem++;
                        tb=(float)tong/dem;
                  }           
            }
            
      }
      printf("Tong: %d",tong);
      printf("Trung Binh: %f",tb);

      return 0;
}
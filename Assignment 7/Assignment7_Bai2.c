#include <stdio.h>
int main () {
    //Nhập| Ma Trận A
    int a[4][3];
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("Nhap A [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //Nhập| Ma Trận B
    int b[4][3];
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("Nhap B [%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    //Nhập| Ma Trận Tổng và Hiệu của A,B
    int tong[4][3];
    int hieu[4][3];
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            tong[i][j] = a[i][j] + b [i][j];
            hieu[i][j] = a[i][j] - b [i][j];
        }
    }

    //Xuất| Ma Trận A
    printf("[A]:\n");
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    //Xuất| Ma Trận B
    printf("[B]:\n");
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%5d",b[i][j]);
        }
        printf("\n");
    }
    //Xuất| Ma Trận A + B
    printf("[A] + [B]:\n");
      for (int i=0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%5d",tong[i][j]);
        }
        printf("\n");
    }
    //Xuất| Ma Trận A - B
    printf("[A] - [B]:\n");
    
      for (int i=0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%5d",hieu[i][j]);
        }
        printf("\n");
    }

    return 0;
}
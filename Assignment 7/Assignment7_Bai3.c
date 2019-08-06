#include <stdio.h>
int main () {
    //Nhập
    int n[4][3];
    for (int i=0;i<4;i++) 
    {
        for (int j=0;j<3;j++) 
        {
            printf("Nhap So Thu [%d][%d]: ",i,j);
            scanf("%d",&n[i][j]);
        }
    }
    //Xuất| Kết Quả Đầu Tiên
    printf("=> Before: \n");
    for (int i=0;i<4;i++) 
    {
        for (int j=0;j<3;j++) 
        {
            printf("%5d",n[i][j]);
        }
        printf("\n");
    }
    //Tính|
    int n2[3][4];
    for (int i=0;i<3;i++) 
    {
        for (int j=0;j<4;j++) 
        {
           n2[i][j]=n[j][i];
        }
    }
    //Xuất| Kết Quả Sau Khi Chuyển Vị
    printf("=> After: \n");
      for (int i=0;i<3;i++) 
    {
        for (int j=0;j<4;j++) 
        {
            printf("%5d",n2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
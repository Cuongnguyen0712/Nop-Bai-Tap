#include <stdio.h>
int main () {
    //Nhập|
    int n[4][4];
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++) 
        {
            printf("Nhap So Thu [%d][%d]: ",i,j);
            scanf("%d",&n[i][j]);
        }
    }
    //Xuất|
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++) 
        {
            printf("%5d",n[i][j]);
        }
        printf("\n");
    }
    //Tính|
    int Tong=0;
    int Dem=0;
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++) 
        {
            if (i==j) {
                Tong=Tong+n[i][j];
                Dem++;
            }
        }
    }
    int TB;
    TB=Tong/Dem;
    printf("Tong Duong Cheo= %d \n",Tong);
    printf("Trung Binh= %d",TB);
    

    return 0;
}
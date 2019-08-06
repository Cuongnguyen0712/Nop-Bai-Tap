//Nhập mảng đa chiều, in ra phần tử của hàng và cột.
#include <stdio.h> 
int main () {
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Nhap arr[%d][%d]: \n",i,j);
            scanf("%d",&arr[i][j]);
        }        
    }
    // Cach 1:
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if (i==0) {
    //             arr[i][j]++;
    //         }
    //     }
    // }
    //
    
    // Cach 2:
    for (int i=0;i<4;i++) {
        arr[0][i]++;
    }
    //
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d ",arr[i][j]);
        }
        printf("\n");        
    }
    return 0;
}
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
    printf("-----------------------\n");
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
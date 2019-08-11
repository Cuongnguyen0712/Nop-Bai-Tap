//Nhập mảng đa chiều arr[4][3], in ra hàng và tổng hàng lớn nhất.
#include <stdio.h> 
int main () {
    int arr[4][3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Nhap arr[%d][%d]: \n",i,j);
            scanf("%d",&arr[i][j]);
        }        
    }
    printf("------------------------------\n");
    int max = 0,x=0;
    for (int i = 0; i < 4; i++)
    {
        int Tong=0;
        for (int j = 0; j < 3; j++)
        {
            Tong=Tong+arr[i][j];
            printf("%5d",arr[i][j]);
        }
        printf(" => Tong = %d\n",Tong); 
        if (i==0) {
            max=Tong;
        }
        if (max<Tong) {
            max = Tong;
            x=i;
        }
    }
    printf("------------------------------\n");   
    printf("Max = %d Thuoc Hang Thu [%d]\n",max,x); 

    return 0;
}
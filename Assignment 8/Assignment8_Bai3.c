#include <stdio.h>

int hang_lon_nhat (int n[][4]) {
    int max=0;
    int x=0;
    for (int i=0;i<4;i++) 
    {
        int tong=0;
        for (int j = 0;j<4;j++)
    {
        tong = tong + n[i][j];
    }
        if (i==0) {
            max=tong;
        }
        if (max<tong) {
            max = tong;
            x=i;

        }
    }
    return max;
}

int main () {
    int n[4][4];
    for (int i=0;i<4;i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Nhap So Thu [%d][%d]: ",i,j);
            scanf("%d",&n[i][j]);
        }
        
    }

    for (int i=0;i<4;i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d",n[i][j]);
        }
        printf("\n");
    }

    printf("Max = %d",hang_lon_nhat(n));

    return 0;
}
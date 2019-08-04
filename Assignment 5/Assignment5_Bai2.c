//Nhập vào số n, in ra các số thuận nghịch < n
#include <stdio.h>

int main(){
    int n;
    printf("Nhap So N: \n");
    scanf("%d",&n);
    for (int i=1; i<n; i++)
    {
		//Cách 1:
    	int m=i,count=0;
        while (m!=0)
        {
            count=count*10+m%10;
            m/=10;
        }
        if (count==i)
        {
            printf("[%d] La So Thuan Nghich < [%d]\n",i,n);
        }
		// cách 2:
        // int tg = i;
        // int kq = 0;
        // for (int j = 0; tg!=0 ; tg/=10)
        // {
        //     kq=kq*10+tg%10;
        // }
        // if (kq==i)
        // {
        //     printf("[%d] La So Thuan Nghich < [%d]\n",i,n);
        // }
	}
       
    return 0;
}
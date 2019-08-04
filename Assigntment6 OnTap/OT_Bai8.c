#include <stdio.h>
int main () {
    int Tong=0;
    for (int i=1;i<=199;i++) {
        if (i%2!=0) 
            {
                Tong=Tong+i;
                printf("So Le: %d \n",i);  
            }  
    }
    printf("=> Tong= %d \n",Tong);   
    return 0;
}
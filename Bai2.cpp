#include <stdio.h>

int main() {
    int a,b,c;
    printf ("Nhap So Thu [1]: \n");
    scanf("%d",&a);
    printf ("Nhap So Thu [2]: \n");
    scanf("%d",&b);
    printf ("Nhap So Thu [3]: \n");
    scanf("%d",&c);
    if(a>b) {
        if (a>c) {
            if (b>c){
                printf("Max = %d \n",a);
                printf("Min = %d \n",c);
            }else {
                printf("Max = %d \n",a);
                printf("Min = %d \n",b);
            }
        } else {
            printf("Max = %d \n",c);
            printf("Min = %d \n",b);
        }
    } else{
        if (b>c){
            if (a>c) {
                printf("Max = %d \n",b);
                printf("Min = %d \n",c);
            } else{
                printf("Max = %d \n",b);
                printf("Min = %d \n",a);}
        } else{
            printf("Max = %d \n",c);
            printf("Min = %d \n",a);
        }
    }

    return 0;
}
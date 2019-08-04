#include <stdio.h>
int main () {
    int a,b;
    printf("Nhap A: ");
    scanf("%d",&a);
    printf("Nhap B: ");
    scanf("%d",&b);
    //Lặp Số Hàng
    for(int i = 0; i <a; i++) {
        //Lặp Số Cột
        for(int j = 0 ; j < b; j++) {
            if(i == 0 || j == 0 || i == a-1 || j == b-1){
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}
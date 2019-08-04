#include <stdio.h>

int main() {
    float a,b; //Neu de int thi luc chia khong chinh xac, nen em de float thay a.
    printf("Nhap Vao So Thu [1]: \n");
    scanf("%f",&a);
    printf("Nhap Vao So Thu [2]: \n");
    scanf("%f",&b);
    if(a>b){
        printf("%f/%f = %f",a,b,a/b);
    }else{
        printf("%f*%f = %f",a,b,a*b);
    }
    return 0;
}
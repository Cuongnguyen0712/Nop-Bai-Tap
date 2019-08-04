#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,D;
    float x1,x2,x1x2;
    printf("Nhap vao [a]: \n");
    scanf("%d",&a);
    printf("Nhap vao [b]: \n");
    scanf("%d",&b);
    printf("Nhap vao [c]: \n");
    scanf("%d",&c);
    printf("Phuong Trinh: (%d)x^2 + (%d)x + (%d) = 0 \n",a,b,c);
    D =  (b*b)-(4*a*c); //Tinh Delta
    x1 = (-b+sqrt(D))/(2*a);
    x2 = (-b-sqrt(D))/(2*a);
    x1x2 = -b/(2*a);
    if (D<0) {
        printf("Delta = %d < 0 \n=> Phuong Trinh Vo Nghiem",D);
    } else if (D==0){
        printf("Delta = 0 \n=> Co Nghiem Kep: x1,x2 = %f",x1x2);
    } else {
        printf("Delta = %d > 0 \n=> Co 2 Nghiem: \n",D);
        printf("x1 = %f \n",x1);
        printf("x2 = %f \n",x2);
    }
    return 0;
}

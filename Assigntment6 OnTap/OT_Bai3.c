#include <stdio.h>
int main() {
    int x,y;
    printf("Nhap Vao So X: ");
    scanf("%d",&x);
    printf("Nhap Vao So Y: ");
    scanf("%d",&y);
    printf("Gia Tri Ban Dau X = [%d], Y = [%d]\n",x,y);
    int Tgian = x;
    x=y;
    y=Tgian;
    printf("Gia Tri Sau Doi X = [%d], Y = [%d]\n",x,y);

    return 0;
}
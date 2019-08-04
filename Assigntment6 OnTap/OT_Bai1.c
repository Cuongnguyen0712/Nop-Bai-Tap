#include <stdio.h>
int main(){
    int n[2];
    int Ln;
    int i;
    for(i=0;i<2;i++) {
    printf("Nhap vao so thu [%d]: ",i);
    scanf("%d",&n[i]);
    }
    Ln = n[0];
    for (i=1;i<2;i++) {
        if (Ln < n[i]) 
        {
           Ln = n[i];//Thac mac Ln=n[i] và n[i]=Ln co khac nhau khong ?
        }
    }
    printf("So Lon Nhat= %d",Ln);
    return 0;
}
#include <stdio.h>
int sap_sep_mang (int x,int n[]) {
    int i;
    for(i = 0; i < x - 1; i++){
        for(int j = i + 1; j < x; j++){
            if(n[i] < n[j]){
                int tg = n[i];
                n[i] = n[j];
                n[j] = tg;        
            }
        }   
    }
    return n[i];
}

int main () {
    int x;
    int n[x];
    printf("Nhap So N: ");
    scanf("%d",&x);
    for (int i = 0; i < x; i++)
    {
        printf("Nhap So Thu [%d]: ",i);
        scanf("%d",&n[i]);
    }
    
    printf("Sap xep: \n",sap_sep_mang(n,x));
 
    return 0;
}
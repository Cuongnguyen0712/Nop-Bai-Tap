#include <stdio.h>
int main () {
    int n;
    printf("Nhap So: ");
    scanf("%d",&n);
    while (n%2!=0) {
        printf("Nhap So: ");
        scanf("%d",&n);
    }
    printf ("=> [%d] La So Chan",n);
    return 0;
}
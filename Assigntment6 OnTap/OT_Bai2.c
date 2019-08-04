#include <stdio.h>
int main() {
    int n;
    printf("Nhap So: ");
    scanf("%d",&n);
    if (n>=0) {
        printf("[%d] La So Duong (+)",n);
    } else {
        printf("[%d] La So Am (-)",n);
    }

    return 0;
}
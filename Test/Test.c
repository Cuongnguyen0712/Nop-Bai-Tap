#include <stdio.h>
#include <string.h>

int main () {
      char a[20];
      char temp;
      printf("Nhap Chuoi Ky Tu: ");
      scanf("%s",a);
      printf("Before: %s\n",a);
      int x=strlen(a);
      printf("%d",x);
      return 0;
}
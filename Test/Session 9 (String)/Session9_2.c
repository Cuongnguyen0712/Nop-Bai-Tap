#include <stdio.h>
#include <string.h>

int main () {
      int s=[20];
      printf("Nhap Vao Chuoi: ");
      scanf("%s",s);
      for (int i = strlen(s)-1; i >= 0; i--)
      {
            printf("%c",s[i]);
      }
      
      return 0;
}
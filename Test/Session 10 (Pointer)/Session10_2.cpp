//Nhập vào A,B tính tổng hiệu bằng pointer
#include <stdio.h>

int main () {
      int x,y;
      int *p,*q;
      
      p=&x;
      q=&y;

      printf("Nhap A: ");
      scanf("%d",p); // Tương tự scanf("%d",&x)
      printf("Nhap B: ");
      scanf("%d",q); // Tương tự scanf("%d",&y)

      printf("Tong: %d",*p+*q);
      printf("\n");
      printf("Hieu: %d",*p-*q);

//Mảng 1 Chiều:
// Bản thân array giống pointer
//VD1:
      int ar[5] = {6,7,8,9,10};
      printf("ar[2]: %d\n",ar[2]);
      printf("ar[2]: %d\n",*(ar+2)); // *(ar+2) tương đương ar[2] 
      printf("ar[0]: %d\n",*ar); // *ar tương đương ar[0]
//VD2:
      char s[10];
      scanf("%s",s); 
      printf("Chuoi vua nhap: %s\n",s);
//Mảng 2 Chiều:
      // b[2][3] = *(b[2]+3)
      return 0;
}
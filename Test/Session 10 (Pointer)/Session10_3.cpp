#include <stdio.h>
#include <stdlib.h>

int main () {
      int *ar;
      //Dùng malloc (Không dọn dẹp giá trị rác, dễ sai số => Nhanh hơn)
      ar=(int *)malloc(5*sizeof(int)); // Tương đương int ar[5]
      //Dùng calloc (Dọn dẹp, đưa các giá trị về ban đầu trước khi làm => Chậm hơn)
      ar=(int *)calloc(5,sizeof(int)); // Tương đương int ar[5]
// => malloc và calloc tương đương nhau

      for (int i = 0; i < 5; i++)
      {
            *(ar+i) = i + 10; // Tương đương ar[i] = i+10;
      }
      for (int i = 0; i < 5; i++)
      {
            printf("%3d",*(ar+i)); // Tương đương printf("%3d",ar[i]);
      }

      ar = (int *)realloc(ar,10*sizeof(int)); // relloc cấp lại kích thước ô nhớ lên 10 => ar[10]

      for (int i = 5; i < 10; i++)
      {
            *(ar+i) = i+10;
      }
      printf("\n");
      for (int i = 0; i < 10; i++)
      {
            printf("%3d",*(ar+i));
      }
      
      return 0;
}
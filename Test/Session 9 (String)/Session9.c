#include <stdio.h>
#include <string.h>

int main () {
      // VD 1:
      // char s[20];
      // printf("Nhap chuoi:\n");
      // scanf("%s",s);
      // printf(" Mang sau khi nhap: %s\n",s);


      char s1[20],s2[20];
      printf("Nhap chuoi 1:\n");
      scanf("%s",s1);
      printf("Nhap chuoi 2:\n");
      scanf("%s",s2);

      // VD2:
      // printf(" Chuoi s1 sau khi nhap: %s\n",s1);
      // strcat(s1,s2); //s1+s2
      // printf(" Chuoi s1 sau khi nhap dung ham: %s\n",s1);// s1 =s1+s2

      if (strcmp(s1,s2)==0) 
      {
            printf("Hai chuoi giong nhau\n");
      }
      
      printf("Ket qua: %d\n",strcmp (s1,s2));//So sánh chuỗi theo ASCII
      printf("Vi tri cua ky tu H trong chuoi: %ld\n"),strchr(s1,'h')-s1;//Tìm vtri của ký tự h đầu tiên trong chuỗi s1
      strcpy(s1,s2);//Copy 1 chuỗi sang chuỗi khác (vd: s1=s2)
      printf("Chuoi s1 sau khi copy: %s\n",s1);
      printf("Kich thuoc chuoi 1: %ld\n",strlen(s1));//Tìm sô lượng (kích thước) của chuỗi ký tự

      for (int i = 0; i < strlen(s1); i++)
      {
            if (s1[i]>=97 && s1[i]<=122)
            {
                   printf("c",s1[i]-32);// Chuyển ký tự a-z in thường thành in hoa (chữ thường hơn chữ hoa là 32 trong bảng ký tự ASCII)
            }
           
      }
      

      return 0;
}
#include <stdio.h>

int sap_sep_chuoi_alphabet (char a[])
{
      int i;
      char temp;
      int Dem=strlen(a); //Đếm độ dài của chuỗi ký tự (VD: Có 7 Ký tự => Dem = 7)
      for (i = 0; i < Dem-1; i++)
      {
            for (int j = i+1; j < Dem; j++)
            {
                  if (a[i]>a[j])
                  {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                  }
                  
            }
            
      }
      return a;
}

int main () {
      char a[20];
      printf("Nhap Chuoi Ky Tu: ");
      scanf("%s",a);
      printf("=> Before: %s\n",a);      
      printf("=> After: %s",sap_sep_chuoi_alphabet(a));  
      return 0;
}
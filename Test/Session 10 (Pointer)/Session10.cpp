#include <stdio.h>
#include <iostream>

int main () {
      int x=10;
      int *p; // " * " Là ký tự khai báo point, p là tên biến
      std::cout << x;
      printf("\n");
      std::cout << &x; // In ra địa chỉ ô nhớ x (0x61feb8)
      printf("\n");
      p = &x; // cho p lấy địa chỉ ô nhớ của x (0x61feb8)
      std::cout << p;
      printf("\n");
      std::cout << *p; // " *p " lấy giá trị của địa chỉ x => p=10
      printf("\n");
      (*p)++; // (*p) Lấy giá trị của x và tăng giá trị của x (x=x++) => x = 11
      std::cout << x;
      *p++; // Lấy giá trị của ô nhớ tiếp theo
      std::cout << x;
      printf("\n");
      (*p) = 0;
      std::cout << x;
      return 0;
}
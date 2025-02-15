#include <iostream>
int main() {
  int a = 56, b = 98;
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  std::cout << "GCD = " << a << std::endl;
  return 0;
}

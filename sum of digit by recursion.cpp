#include <iostream>
int sumOfDigits(int n) {
  if (n == 0)
    return 0;
  return n % 10 + sumOfDigits(n / 10);
}
int main() {
  int n = 12345;
  std::cout << "Sum of digits = " << sumOfDigits(n) << std::endl;
  return 0;
}

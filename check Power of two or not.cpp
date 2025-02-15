// Write a program to check if a given number is a power of two

#include <iostream>
int main() {
  int n = 16;
  // Logic to check power of two
  if(n>0 && (n & (n-1))==0) {
    std::cout << n << " is a power of 2." << std::endl;
  } else {
    std::cout << n << " is not a power of 2." << std::endl;
  }
    
  
  return 0;
}

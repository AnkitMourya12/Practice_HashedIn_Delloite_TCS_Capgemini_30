#include <iostream>
#include <string>
int main() {
  std::string str = "Hello World";
  // Logic to calculate string length
  int length=0;
  while(str[length]!='\0'){
    length++;
  }
  std::cout<<"Length of the string = "<<length<<std::endl;
  return 0;
}

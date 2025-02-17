#include <iostream>
#include <string>
int main() {
  std::string str1 = "abcd", str2 = "cdab";
  // Logic to check for rotations
  if (str1.size() == str2.size() &&
      (str1 + str1).find(str2) != std::string::npos) {
    std::cout << "Strings are rotations of each other." << std::endl;
  } else {
    std::cout << "Strings are not rotations of each other." << std::endl;
  }
  return 0;
}

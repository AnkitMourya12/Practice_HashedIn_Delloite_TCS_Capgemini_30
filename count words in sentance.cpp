// Create a program that counts the number of words in a given string
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
  std::string str = "Count the number of words in this string";
  // Logic to count words
  istringstream is(str);
  string word;
  int c=0;
  while(is>>word){
    c++;
  }
  cout<<"Word Count = "<<c<<endl;
  
  return 0;
}

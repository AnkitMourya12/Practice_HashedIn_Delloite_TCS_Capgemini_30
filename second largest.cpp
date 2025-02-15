
//Write a program to find the second largest number in an array
#include <iostream>
int main() {
  int arr[] = {3, 5, 1, 4, 2};
  // Logic to find second largest number
  int l1=0;
  int s_l=0;
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++){
    if(arr[i]>l1){
      s_l=l1;
      l1=arr[i];
    }
    else if(arr[i]>s_l && arr[i]!=l1){
      s_l=arr[i];
    }
  }
  std::cout << "Second largest number = " << s_l << std::endl;
  return 0;
  return 0;
}

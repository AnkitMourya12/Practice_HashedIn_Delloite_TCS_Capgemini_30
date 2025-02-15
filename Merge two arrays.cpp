// 2. Implement a program to merge two sorted arrays into one sorted array


#include <iostream>
using namespace std;
int main() {
  int arr1[] = {1, 3, 5}, arr2[] = {2, 4, 6};
  // Logic to merge arrays
  int i=0,j=0;
  int n1=sizeof(arr1)/sizeof(arr1[0]);
  int n2=sizeof(arr2)/sizeof(arr2[0]);
  int n3=n1+n2;
  int arr[n3];
  int k=0;
  
  while(i<n1 && j<n2){
    if(arr1[i]<arr2[j]){
      arr[k++]=arr1[i];
      i++;
    }
    else{
      arr[k++]=arr2[j];
      j++;
    }
  }
  
  while(i<n1){
    arr[k++]=arr1[i];
    i++;
  }
  
  while(j<n2){
    arr[k++]=arr2[j];
    j++;
  }
  std::cout << "Merged array: ";
  for (int x : arr)
    std::cout << x << " ";
  std::cout << std::endl;
  
  return 0;
}

#include <iostream>
int main() {
  int arr[] = {2, 4, 6, 8, 10}, target = 6;
  // Logic for binary search
  int l=0;
  int n=sizeof(arr)/sizeof(arr[0]);
  int r=n-1;
  int mid;
  
  while(l<=r){
    mid=l+(r-l)/2;
    if(target==arr[mid]){
      std::cout << "Element found at index: " << mid << std::endl;
      return 0;
    }
    else if(arr[mid]>target){
      r=mid-1;
    }
    else {
      l=mid+1;
    }
  }
  std::cout << "Element not found." << std::endl;
  
  return 0;
}

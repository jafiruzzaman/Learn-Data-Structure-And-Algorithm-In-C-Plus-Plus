// GFG link --> https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
// CodeStudio link --> https://www.naukri.com/code360/problems/largest-element-in-the-array-largest-element-in-the-array_5026279
#include<iostream>
using namespace std;
/*
  * Brute-force Solution (using Merge/Quick) Sort
  * ⏰ Time Complexity --> O(N log n)
  * 💾 Space Complexity --> O(1)
*/
//* Optimal Solution ()
/* 
  * Intuition
  * 1. initialize largest will be with the first element of the array
  * 2. iterate with 2nd index to the whole array and compare with largest
  * 3. if array's value >= largest store it into largest
  * 4. return it
  * ⏰ Time Complexity --> O(n)
  * 💾 Space Complexity --> O(1)
*/
int largestElement(int arr[],int n){
  int largest = arr[0];
  for(int i = 1;i<n;i++){
    if(arr[i]>=largest){
      largest = arr[i];
    }
  }
  return largest;
}
int main(){
  // take array's size from the user
  int size;
  cout<<"Enter the size of the array "<<endl;
  cin>>size;
  int arr[size];
  cout << "Enter the array values:\n";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  int largest = largestElement(arr,size);
  cout<<"The Largest element in the array is "<<largest<<endl;
}
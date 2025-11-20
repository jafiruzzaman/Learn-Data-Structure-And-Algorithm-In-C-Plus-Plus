#include <iostream>
using namespace std;
// GFG link --> https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
// ? Problem: Check if array is sorted or not
/*
 * We don't need multiple solution like (brute,better)
*/
//* Solution Code
bool sortedArray(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] > arr[i - 1]) {

    }else {
      return false;
    }
  }
  return true;
}
int main() {
  int arr[] = {1,2,3,4,5,6,7,8,9};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << sortedArray(arr, n) << endl;
}
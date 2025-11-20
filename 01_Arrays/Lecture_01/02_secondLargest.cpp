// ? GFG link --> https://www.geeksforgeeks.org/problems/second-largest3735/1
// ? CodeStudio link --> https://www.naukri.com/code360/problems/ninja-and-the-second-order-elements_6581960

// Problem: Find the Second-Largest Element in Array ?

/* Brute-Force Solution (by using sorting(merge,quick))
 * first I have to sort the array (by using sorting(merge,quick))
 * then I have to iterate the array from reverse and compare with largest
 * ⏰ Time Complexity --> O(N log n + O(n))
 * 💾 Space Complexity --> O(1)
*/

/* Better Solution
 * first I have to find the largest-element
 * then I have to iterate the array and check if my arr[i] < the largest then I will put it into secondLargest
 * ⏰ Time Complexity --> O(n) + O(n) --> O(2n)
 * 💾 Space Complexity --> O(1)
 * Code:
*/

#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n) {
 int largest = arr[0];
 for (int i = 1; i < n; i++) {
  if (arr[i] > largest) {
   largest = arr[i];
  }
 }
 return largest;
}

int secondLargestBetter(int arr[], int n) {

 int maxVal = largest(arr, n); // 🔥 calling function inside another function

 int secondLargest = -1; // assuming array has positive values

 for (int i = 0; i < n; i++) {
  if (arr[i] < maxVal) {             // smaller than largest
   secondLargest = max(secondLargest, arr[i]);
  }
 }

 return secondLargest;
}
/*
 * Optimal Solution
 * we travel the whole array and find the largest & second-largest element in the array
 * first we initialize,
   * largest with arr[0] and slargest = -1;
   * travel the whole array if arr[i] > largest,
     * slargest = largest;
     * largest = arr[i];
  * what if arr[i]<largest,
  * in that case we compare arr[i] > slargest && arr[i]!=largest
    * we store it into slargest
 * return the second-largest means slargest
 */
int slargest(int arr[], int n) {
 int largest = arr[0];
 int secondLargest = -1;
 for (int i = 1; i < n; i++) {
  if (arr[i] > largest) {
   secondLargest = largest;
   largest = arr[i];
  }else if (arr[i] > secondLargest && arr[i] < largest) {
   secondLargest = arr[i];
  }
 }
 return secondLargest;
}
int main() {
 int arr[] = {10, 5, 20, 8};
 int n = 4;

 cout << "Second Largest = " << secondLargestBetter(arr, n) << endl;
 cout << "Second Largest Optimal = " << slargest(arr, n) << endl;
 return 0;
}
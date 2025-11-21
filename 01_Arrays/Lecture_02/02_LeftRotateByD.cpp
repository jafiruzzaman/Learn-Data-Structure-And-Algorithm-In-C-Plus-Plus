//? Leetcode link --> https://leetcode.com/problems/rotate-array/description/
// ? GFG link --> https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1
// header file
#include <bits/stdc++.h>
using namespace std;

void leftRotateByDBrute(vector<int> &arr, int d) {
  int n = arr.size();
  if (n == 0) return;

  d = d % n;  // handle d > n

  // Step-01: store first d elements
  vector<int> temp;
  for (int i = 0; i < d; i++) {
    temp.push_back(arr[i]);
  }

  // Step-02: shift the remaining n-d elements to the left
  for (int i = d; i < n; i++) {
    arr[i - d] = arr[i];
  }

  // Step-03: place temp elements at the end
  for (int i = 0; i < d; i++) {
    arr[n - d + i] = temp[i];
  }
}
/*
 * Optimal Solution
 */
void leftRotateByDOptimal (vector<int> &arr, int d) {
  int n = arr.size();
  if (n == 0) return;
  d = d % n;
  reverse(arr.begin(),arr.begin()+d);
  reverse(arr.begin()+ d,arr.end());
  reverse(arr.begin(),arr.end());
}
int main() {
  vector<int> arr = {1,2,3,4,5,6,7};
  int d = 2;

  leftRotateByDBrute(arr, d);
  vector<int> brr = {2,3,4,5,6,7,8};
  int rotate = 4;
  leftRotateByDOptimal(brr, rotate);
  for(int i : arr)
    cout << i << " ";
  cout << endl;
  cout<<"Optiaml Solution"<<endl;
  for(int i : brr)
    cout << i << " ";
  cout << endl;
  return 0;
}

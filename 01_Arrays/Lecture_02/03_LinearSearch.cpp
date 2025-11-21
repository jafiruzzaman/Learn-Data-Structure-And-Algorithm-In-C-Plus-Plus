//
// Created by progr on 11/21/2025.
//
// ? GFG link --> https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1

#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int key) {
  // length of the array
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i;
    }
  }
  return -1;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int key = -1;
  int result = linearSearch(arr, key);
  cout<<result<<endl;
}
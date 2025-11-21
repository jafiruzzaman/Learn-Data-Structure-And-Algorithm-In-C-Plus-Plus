//
// Created by progr on 11/21/2025.
//
// Naukri link --> https://www.naukri.com/code360/problems/left-rotate-an-array-by-one_5026278?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

// Left rotate by 1
vector<int> leftRotateByOne(vector<int> &arr) {
  int n = arr.size();
  if (n == 0) return arr; // correct

  int temp = arr[0];

  for (int i = 1; i < n; i++) {
    arr[i - 1] = arr[i]; // correct logic
  }

  arr[n - 1] = temp;

  return arr;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  cout<<"Actual Array: "<<endl;
  for (auto item : arr) cout<<item<<" ";
  cout<<endl;
  cout<<"After Rotation"<<endl;
  arr = leftRotateByOne(arr);
  for (int x : arr) cout << x << " ";
}

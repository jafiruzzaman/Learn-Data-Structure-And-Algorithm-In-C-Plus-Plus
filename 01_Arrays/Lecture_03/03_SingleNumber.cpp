// Leetcode link --> https://leetcode.com/problems/single-number/description/

#include<bits/stdc++.h>
using namespace std;


/*
 * Brute-force Solution --> Double Iteration
  
*/
int singleNumberBrute(vector<int> &nums){
  // length of the nums array
  int n = nums.size();

  // iterate the array element and check which only appears once
  for (int i = 0; i < n; i++) {
    bool found = false;
    for (int j = 0; j < n; j++) {
      if(i!=j && nums[i]==nums[j]){
        found = true;
        break;
      }
    }
    if(!found) return nums[i];
  }
  // Edge-Case if not found the 
  return -1;

}
/* 
  *⏰ Time Complexity --> O(n^2)
  * 💾 Space Complexity --> O(1)
*/

/*
  * Optimal Solution --> XOR
  * a ^ a = 0;
  * a ^ 0 = a;
*/
int singleNumberOptimal(vector<int> &nums){
  int n = nums.size();
  int result = 0;
  for (int i = 0; i < n; i++) {
    result^=nums[i];
  }
  return result;
}

/* 
  *⏰ Time Complexity --> O(n)
  * 💾 Space Complexity --> O(1)
*/


// Main Function
int main() {
  vector<int> nums = {4,1,2,1,2};
  cout << singleNumberBrute(nums) << endl; // Output: 4
  cout << singleNumberOptimal(nums) << endl; // Output: 4
}
// ? Leetcode link --> https://leetcode.com/problems/max-consecutive-ones/description/

#include<bits/stdc++.h>
using namespace std;

//  🚨 This Problem don't need brute-better
/*
  *Optimal Solution --> using linear search
*/
int findMaxConsecutiveOnes(vector<int> &nums) {
  int n = nums.size();
  int count = 0;
  int maxi= 0;
  for(int i =0;i<n;i++){
    if(nums[i]==1){
      count++;
      maxi = max(maxi,count);
    }else{
      count=0;
    }
  }
  return maxi;
}
/* 
  *⏰ Time Complexity --> O(n)
  * 💾 Space Complexity --> O(1)
*/

// Main Function
int main() {
  vector<int> nums = {1,1,0,1,1,1,0,1,1};
  int result = findMaxConsecutiveOnes(nums);
  cout<<"Most Consecutive One is : "<<result<<endl;
  return 0;
}
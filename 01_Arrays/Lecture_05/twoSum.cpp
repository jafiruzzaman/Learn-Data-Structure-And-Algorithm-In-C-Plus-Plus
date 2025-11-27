// ? leetcode link --> https://leetcode.com/problems/two-sum/

// Header file
#include<bits/stdc++.h>
using namespace std;

/*
  * Brute-Force Solution
  * Intuition
    * 1. use double-loop to iterate the array
    * 2. if target found return the target with indices
*/
vector<int>twoSumBrute (vector<int>&nums,int target){
  // length of the array
  for (int i = 0; i < nums.size(); i++)
  {
    for (int j = i+1; j < nums.size(); j++)
    {
      if (nums[i]+nums[j]==target)
      {
        return {i,j};
      }
    }
  }
  return {-1,-1};
}
// ⏰ Time Complexity --> O(n^2)
// 💾 Space Complexity --> O(1)


/*
  * Better Solution
  * Intuition
    * initialize a vector with pairs
    * copy all the elements
    * sort the array
    * now using two-pointer
*/
vector<int>twoSumBetter(vector<int>&nums,int target){
  // length of the array
  int len = nums.size();
  // create an array
  vector<pair<int,int>> arr;
  for(int i =0;i<len;i++){
    arr.push_back({nums[i],i});
  }
  // sort the array
  sort(arr.begin(),arr.end());

  // using two-pointer approach
  int left=0,right=len-1;
  while(left<right){
    int sum = arr[left].first+arr[right].first;
    if(sum==target) {
      return {arr[left].second,arr[right].second};
    }
    else if(sum<target) left++;
    else right--;
  }
  return {-1,-1};
}
// ⏰ Time Complexity --> O(n long n)
// 💾 Space Complexity --> O(n)
vector<int>twoSumOptimal(vector<int>&nums,int target) {
  // length of the array
  int len = nums.size();
  // initialize unordered-map
  unordered_map<int,int> mp;
  for(int i =0;i<len;i++) {
    int needed= target-nums[i];
    if(mp.find(needed)!=mp.end()){
      return {mp[needed],i};
    }
    mp[nums[i]] = i;
  }
  // if not found
  return {-1,-1};
}
// Main Function
int main() {
  vector<int>nums = {2,7,11,15};
  int target = 6;
  vector<int> bruteResult = twoSumBrute(nums,target);
  vector<int> BetterResult = twoSumBetter(nums,target);
  vector<int> optimalSolution = twoSumOptimal(nums,target);
  cout<<"Brute-Solution"<<endl;
  for(int item : bruteResult){
    cout<<item<<" "<<endl;
  }
  cout<<"Better Solution"<<endl;
  for(int item : BetterResult){
    cout<<item<<" "<<endl;
  }
  cout<<"Optimal Solution"<<endl;
  for(int item: optimalSolution) {
    cout<<item<< ' '<<endl;;
  }
  return 0;
}

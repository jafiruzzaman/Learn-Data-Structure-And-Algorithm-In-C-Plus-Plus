// ? Leetcode link --> https://leetcode.com/problems/majority-element/description/
// Header File
#include<bits/stdc++.h>
using namespace std;
/*
Input: arr[] = [1, 1, 2, 1, 3, 5, 1]
Output: 1
Explanation: Element 1 appears 4 times. Since ⌊7/2⌋ = 3, and 4 > 3, it is the majority element.
*/
/*
  * Brute-force Solution 
*/
int majorityElementsBrute(vector<int> &nums){
  // length of the array
  int len = nums.size();
  for(int i =0;i<len;i++){
    int count=0;
    for(int j =0;j<len;j++){
      if(nums[i]==nums[j]){
        count++;
      }
    }
    if (count>(len/2))
    {
      return nums[i];
    }
  }
  return -1;
}
/*
  * ⏰ Time Complexity : O(n^2)
  * 💾 Space Complexity : O(1)
*/

/*
  *Better Solution --> using Hashing
*/
int majorityElementBetter(vector<int> &nums) {
  int n = nums.size();
  unordered_map<int,int> countMap;
  for(int num : nums){
    countMap[num]++;
    if (countMap[num]>n/2)
    {
      return num;
    }
  }
  return -1;
}

/*
 * Moore's Voting Algorithm --> element,count
*/
int majorityElementOptimal(vector<int> &nums){
  // default element
  int element = nums[0];
  int count=1;
  for(int i =1;i<nums.size();i++) {
    if (count==0)
    {
      element =nums[i];
      count=1;
    }else if(nums[i]==element) {
      count++;
    }else {
      count--;
    }
  }
  // verify the element
  int counts=0;
  for (int i = 0; i < nums.size(); i++)
  {
    if(nums[i]==element) {
      counts++;
    }
  }
  return (counts>nums.size()/2) ? element : -1;
}
/*
 * ⏰ Time Complexity : O(n)
 * 💾 Space Complexity : O(1)
*/

// Main Function 
int main() {
  vector<int> nums = {1, 1, 2, 1, 3, 5, 1};
  int bruteForceSolution = majorityElementsBrute(nums);
  int betterSolution = majorityElementBetter(nums);
  int optimalSolution = majorityElementOptimal(nums);
  cout<<"Brute-force solution: "<<bruteForceSolution<<endl;
  cout<<"Better solution: "<<betterSolution<<endl;
  cout<<"Optimal solution: "<<optimalSolution<<endl;
  return 0;
}

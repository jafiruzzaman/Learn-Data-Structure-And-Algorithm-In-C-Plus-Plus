// ? Leetcode link --> https://leetcode.com/problems/sort-colors/description/
// ? GFG link --> https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

// Header File
#include<bits/stdc++.h>
using namespace std;
/*
  * Brute-Force Solution --> By Using Sorting (basic/Advanced)
*/

/*
  * Better Solution --> count 0,1,2
*/
void sortColorsBetter(vector<int>&nums) {
  // length of array
  int len = nums.size();
  int countZero=0,countOne=0,countTwo=0;
  int index=0;
  for (int i = 0; i < len; i++)
  {
    if (nums[i]==0)
    {
      countZero++;
    }else if(nums[i]==1)
    {
      countOne++;
    }else{
      countTwo++;
    }
  }
  // now modify the array
  // insert Zeros
  for (int i = 0; i < countZero; i++)
  {
    nums[index++] = 0;
  }
  // insert Ones
  for (int i = 0; i < countTwo; i++)
  {
    nums[index++] = 1;
  }
  // insert Twos
  for(int i=0;i<len;i++){
    nums[index++]=2;
  }
}
/*
  * Optimal Solution --> Dutch National Flag
  * Approach
*/
void sortColors(vector<int>&nums){
  int low = 0, mid = 0;
  int high = nums.size() - 1;
  while (mid <= high) {
      if (nums[mid] == 0) {
          swap(nums[low], nums[mid]);
          low++;
          mid++;
      }
      else if (nums[mid] == 1) {
          mid++;
      }
      else { // nums[mid] == 2
          swap(nums[mid], nums[high]);
          high--;
      }
  

};

  {
    if(nums[mid]==0){
      swap(nums[low],nums[mid]);
      low++,mid++;
    }
    else if (nums[mid]==1)
    {
      mid++;
    }
    else{
      swap(nums[mid],nums[high]);
      high--;
    }
  }
}

// Main
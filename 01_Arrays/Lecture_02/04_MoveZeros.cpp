// ? Leetcode Link--> https://leetcode.com/problems/move-zeroes/description/
// ? GFG link --> https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1

// Header-file
#include<bits/stdc++.h>
using namespace std;

/*
  brute-force solution
  1. store all the non-zero number into temp array
  2. restore all the non-zero number in the original array
  3. put all the zeros to the end
  4. return the array
*/
void moveZerosBrute(vector<int> &nums){
  // length of arr
  int n = nums.size();
  // create a temp arr
  vector<int> temp;
  for(int i=0;i<n;i++){
    if(nums[i]!=0){
      // put all the non-zero number
      temp.push_back(nums[i]);
    }
  }
  // now put-back into the original-array
  for(int i =0;i<temp.size();i++) {
    nums[i]= temp[i];
  }

  // now put all the non-zero number
  for (int i = temp.size(); i < n; i++) {
    nums[i] = 0;
  }
}

/*
 * Optimal Solution --> By Using Pointer
  * Steps:
    * first find the zero index
    * compare with array index and swap
    * 
 */
void moveZerosOptimal(vector<int> &nums) {
  // length of the nums array
  int n = nums.size();

  // find first zero
  int firstZero=-1;
  for(int i= 0; i < n; i++) {
    if(nums[i]==0) firstZero=i;
    break;
  }
  // edge-case if firstZero Not Found
  if(firstZero==-1) return;
  // iterate the whole array and check if swap needed
  for(int j=firstZero+1;j<n;j++){
    if(nums[j]!=0){
      swap(nums[firstZero],nums[j]);
      firstZero++;
    }
  }
}

// Main Function
int main() {
  vector<int> arr = {0,1,0,3,12};
  moveZerosOptimal(arr);

  // print the array
  for(int i : arr){
    cout<<i<<" ";
  }
  return 0;
}

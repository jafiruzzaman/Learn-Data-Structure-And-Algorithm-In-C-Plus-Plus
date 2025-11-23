// ? Leetcode link --> https://leetcode.com/problems/missing-number/description/

#include<bits/stdc++.h>
using namespace std;

/* 
  * Brute-Force Solution --> using linear-search
*/
int missingNumberBrute(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i <= n; i++) {  // must check from 0 to n
        bool found = false;

        for (int j = 0; j < n; j++) {
            if (nums[j] == i) {
                found = true;
                break; // FIXED BUG
            }
        }

        if (!found) return i;
    }

    return -1; 
}
/* ⏰ Time & Space-Complexity 💾
  * ⏰ Time Complexity --> O(n^2)
  * 💾 Space Complexity --> O(1)
*/


/*
  * Better Solution --> using Hashing
*/
int missingNumberBetter(vector<int> &nums) {
    int n = nums.size();

    vector<int> hash(n + 1, 0);

    for (int i : nums)
        hash[i] = 1;

    for (int i = 0; i <= n; i++) {
        if (hash[i] == 0)
            return i;
    }

    return -1; 
}
/*
  * ⏰ Time Complexity --> O(n)
  * 💾 Space Complexity --> O(n)
*/


/*
  * Optimal Solution --> Sum Formula
*/
int missingNumberOptimal(vector<int> &nums) {
    int n = nums.size();

    long long total = 1LL * n * (n + 1) / 2;

    long long sum = 0;
    for (int i : nums)
        sum += i;

    return total - sum;
}
/* 
  *⏰ Time Complexity --> O(n)
  * 💾 Space Complexity --> O(1)
*/

// Main function
int main() {
    vector<int> nums = {1, 2, 4, 5};
    
    int missNumber = missingNumberBrute(nums);
    cout << "The Missing Number is " << missNumber << endl;

    missNumber = missingNumberBetter(nums);
    cout << "The Missing Number (Better) is " << missNumber << endl;

    missNumber = missingNumberOptimal(nums);
    cout << "The Missing Number (Optimal) is " << missNumber << endl;

    return 0;
}

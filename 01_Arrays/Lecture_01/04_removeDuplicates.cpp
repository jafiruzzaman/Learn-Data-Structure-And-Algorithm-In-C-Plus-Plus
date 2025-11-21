// ? Leetcode link --> https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
// ? GFG link --> https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1
#include <iostream>
#include <set>
#include <vector>
using namespace std;

// -----------------------------
// Brute-force solution (Using Set)
// -----------------------------
vector<int> removeDuplicatesBrute(vector<int> &arr) {
    set<int> st; 
    for (auto item : arr) st.insert(item);

    vector<int> result;
    for (auto item : st) result.push_back(item);

    return result;
}

// -----------------------------
// Optimal solution (Two-pointer)
// -----------------------------
int removeDuplicatesOptimal(vector<int> &arr) {
    // size of the vector
    int n = arr.size();
    // handle edge-case
    if (n == 0) return 0;
    
    int i = 0; // slow pointer
    for (int j = 1; j < n; j++) { // fast pointer
        if (arr[j] != arr[i]) {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1; // new length
}

// -----------------------------
// main function
// -----------------------------
int main() {
    // given array
    int arr[] = {1,1,2,2,3,3,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> v(arr, arr + n);

    // Brute result
    vector<int> bruteResult = removeDuplicatesBrute(v);
    cout << "Brute Result : ";
    for (int x : bruteResult) cout << x << " ";
    cout << endl;

    // Optimal result
    int optimalLength = removeDuplicatesOptimal(v);
    cout << "Optimal Result : ";
    for (int i = 0; i < optimalLength; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}

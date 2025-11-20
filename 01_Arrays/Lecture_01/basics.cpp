#include <iostream>
using namespace std;

int main() {

    // ----------------------------
    // What is an Array?
    // Array is a collection of similar elements stored in contiguous memory locations
    // ----------------------------

    // ❌ THIS IS WRONG:
    // int arr[5];
    // arr[0];   // this line does nothing

    // ✔️ Correct way: declare array, but values will be GARBAGE because arr is not initialized
    int arr1[5];
    cout << arr1[0] << endl;  
    // This prints a random (garbage) value

    // ✔️ Correct initialization of array
    int arr[] = {1, 2, 3, 4, 5};

    // ❌ ERROR: C++ does not have arr.length
    // for (int i = 0; i < arr.length-1; i++)

    // ✔️ Correct way to get array size in C++
    int n = sizeof(arr) / sizeof(arr[0]);

    // ✔️ Correct iteration
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

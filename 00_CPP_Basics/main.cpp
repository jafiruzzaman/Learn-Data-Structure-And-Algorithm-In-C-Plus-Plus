#include <iostream>
using namespace std;

// ----------------------------
// Function Declarations
// ----------------------------
void sayHello() {
    cout << "👋 there" << endl;
}

// ----------------------------
// Main Function
// ----------------------------
int main() {

    // ----------------------------
    // Output to Console
    // ----------------------------
    cout << "Hello World!" << endl;

    // ----------------------------
    // Variables: Containers for values
    // ----------------------------
    int x = 10;

    // ----------------------------
    // Input Example
    // ----------------------------
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;

    // ----------------------------
    // Data Types in C++
    // ----------------------------
    int myAge = 10;
    cout << "My age is: " << myAge << endl;

    long largeValue = 150425465L;
    cout << "Long value: " << largeValue << endl;

    bool isCoder = false;
    cout << "Boolean value: " << isCoder << endl;

    float height = 5.1654236f;
    cout << "Float value: " << height << endl;

    double weight = 52.465645454544445454546;
    cout << "Double value: " << weight << endl;

    char c = 'c';
    cout << "Char value: " << c << endl;

    string str = "This is a string";
    cout << "String value: " << str << endl;

    // ----------------------------
    // Operators
    // ----------------------------
    int a = 5, b = 3;

    // Arithmetic Operators
    cout << "a + b = " << a + b << endl;
    cout << "a * b = " << a * b << endl;

    // Comparison Operators
    cout << "a > b: " << (a > b) << endl;

    // Logical Operators
    cout << "(a > b) && (b < 10): " << ((a > b) && (b < 10)) << endl;

    // Bitwise Operators
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "a << 1 = " << (a << 1) << endl;

    // ----------------------------
    // Conditional Statements
    // ----------------------------
    int userAge;
    cout << "Enter your age again: ";
    cin >> userAge;

    if (userAge >= 18) {
        cout << "You are eligible to drive" << endl;
    } else {
        cout << "You are not eligible to drive" << endl;
    }

    int canDrive = (userAge >= 18) ? 1 : 0;

    switch (canDrive) {
        case 1:
            cout << "Switch: You are eligible to drive" << endl;
            break;
        case 0:
            cout << "Switch: You are not eligible to drive" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    // ----------------------------
    // Loops
    // ----------------------------

    // FOR Loop
    cout << "For Loop: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // WHILE Loop
    cout << "While Loop: ";
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // DO-WHILE Loop
    cout << "Do-While Loop: ";
    int do_i = 7;
    do {
        cout << do_i << " ";
        do_i++;
    } while (do_i <= 5);
    cout << endl;

    // ----------------------------
    // Function Call
    // ----------------------------
    sayHello();

    return 0;
}
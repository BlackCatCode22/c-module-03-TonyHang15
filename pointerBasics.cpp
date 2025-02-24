// pointerBasics.cpp
// sample code for Module 03
// written by dH 2/13/25, Fresno, CA

#include <iostream>
using namespace std;

int main() {
    cout << "\n Welcome to Pointer Basics!\n";

    int num1 = 22;
    int* myIntPointer;

    myIntPointer = &num1;

    cout << "\n The value of num1 is: " << num1 << "\n";

    cout << "\n The address of pointer myIntPointer is: " << myIntPointer << endl;
    cout << "\n The value of the variable named num1 using the pointer named myIntPointer is: " << *myIntPointer << "\n";

    // Dereference the int pointer and give it a new value.
    *myIntPointer = 57;

    // Output the new value of num1.
    cout << "\n The value of num1 is: " << num1 << "\n";

    return 0;
}

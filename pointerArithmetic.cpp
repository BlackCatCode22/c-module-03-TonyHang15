// pointerArithmetic.cpp
// Sample code for Module 03
// dH, 2/13/25, Fresno, CA

#include <iostream>
using namespace std;

int main() {
    cout << "\n Welcome to Pointer Arithmetic!" << endl;

    int arr[5] = {2,4,6,8,9};

    // Create an int pointer and make it hold the address of the first element of the array (by using the array name)
    int* myPtr = arr;

    // Walk thru the array using pointer math.
    // Notice when i will be incremented (before its usage)
    // How many bytes does your system use to store an int? Observe the memory addresses for your answer!
    for (int i=0; i<5; ++i) {
        cout << "\n The address of arr[" << i << "] is: " << (myPtr + i) << "\n";
        cout << "\nn The value of arr[" << i << "] is: " << *(myPtr + i) << "\n";
    }



    return 0;
}

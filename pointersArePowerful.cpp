#include <iostream>

int main() {
    int num = 15; 
    int* ptr = &num; 

    std::cout << "Address of num: " << ptr << "\nValue of num: " << *ptr << std::endl;

    *ptr = 25;  
    std::cout << "New value of num: " << num << std::endl;

    int arr[4] = {10, 20, 30, 40}; 
    std::cout << "Array values with pointer arithmetic:\n";
    for (int i = 0; i < 4; i++) {
        std::cout << "arr[" << i << "] = " << *(ptr + i) << " | Address: " << (ptr + i) << std::endl;
    }

    return 0;
}

// Array
// NUMBER 6

//Write a C++ program to get the length of the array. Original array: numbers = [5,4,3,2,1]

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 4, 3, 2, 1};
    
    int length = (sizeof(numbers) / sizeof(numbers[0])-1); // Calculate array length

    cout << "Length of the array: " << length << endl;

    return 0;
}

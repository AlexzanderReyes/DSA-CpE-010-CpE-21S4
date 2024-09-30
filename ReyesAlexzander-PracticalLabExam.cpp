// Array
// NUMBER 6

//Write a C++ program to get the length of the array. Original array: numbers = [5,4,3,2,1]

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 4, 3, 2, 1}; // Total of numbers
    int length = sizeof(numbers[0]); // Length of the array
    cout << "The length of the array is: " << length << endl; // Printing the Output

    return 0;
}

// NUMBER 6

//Write a C++ program to get the length of the array. Original array: numbers = [5,4,3,2,1]

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 4, 3, 2, 1}; // Total of numbers
    int length = sizeof(numbers) / sizeof(numbers[1]); //This is the Computation of the length of the numbers

    cout << "The length of the arrays is  " << length << endl; // Printing the Output

    return 0;
}

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main(){
    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    cout << "Enter a number to search: ";
    cin >> target;
    
    int result = linearSearch(arr, size, target);
    if (result != -1){
        cout << "Element found at index: " << result << endl;
    }
    else{
        cout << "Elements not found." << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int location_of_target(int arr[], int size, int targetvalue) {
    int index = -1; // Initialize index to -1 to indicate target not found
    for (int i = 0; i < size; ++i) {
        if (arr[i] == targetvalue) {
            index = i; // Update index to the current position
        }
    }
    return index; // Return the last occurrence index or -1 if not found
}

int main() {
    int size;
    cout<<"enter the size of array "<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int targetvalue;
    cout<<"enter the value "<<endl;
    cin>>targetvalue;
    
    int result = location_of_target(arr, size, targetvalue);
    if (result != -1) {
        cout << "The target value " << targetvalue << " is found at index " << result <<  endl;
    } else {
        cout << "The target value " << targetvalue << " is not found in the array." << endl;
    }
    
    return 0;
}

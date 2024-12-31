#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[] = {4, 3, 6, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements
    int target = 3; // Missing semicolon fixed

    int position = LinearSearch(arr, size, target);
    if (position != -1) {
        cout << "Target " << target << " found at position: " << position << endl;
    } else {
        cout << "Target " << target << " not found." << endl;
    }
    return 0;
}

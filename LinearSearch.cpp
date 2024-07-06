#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key, int &index) {
    int size = n; // initialize size
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            index = i; // store the index where the element is found
            return true;
        }
    }
    return false;
}

int main() {
    int arr[10];
    int size;
    cout << "Enter the total number of elements in the array: ";
    cin >> size;
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int key, index;
    cout << "Enter the element to be searched: ";
    cin >> key;

    bool found = linearSearch(arr, size, key, index);
    if (found) {
        cout << key << " is present at index " << index << " in the array.";
    } else {
        cout << key << " is not present in the array.";
    }

    return 0;
}

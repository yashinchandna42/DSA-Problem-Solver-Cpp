#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr) {
    for(int i = 0; i < arr.size() - 1; i++) {
        for(int j = 0; j < arr.size() - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int linearSearch(vector<int> &arr, int key) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {5, 3, 8, 1, 2};
    int choice;

    cout << "1. Bubble Sort\n";
    cout << "2. Linear Search\n";
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1) {
        bubbleSort(arr);
        cout << "Sorted Array: ";
        for(int x : arr) cout << x << " ";
    }
    else if(choice == 2) {
        int key;
        cout << "Enter element to search: ";
        cin >> key;
        int index = linearSearch(arr, key);
        if(index != -1)
            cout << "Found at index " << index;
        else
            cout << "Not Found";
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}

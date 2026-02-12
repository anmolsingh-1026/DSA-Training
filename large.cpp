#include <iostream>
using namespace std;

int findLargest(int arr[], int size) {
    int largest = arr[0];   // Assume first element is largest

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    int arr[] = {10, 45, 23, 89, 12};
    int size = 5;

    cout << "Largest element: " << findLargest(arr, size);

    return 0;
}

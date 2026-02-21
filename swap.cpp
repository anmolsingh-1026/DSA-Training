#include <iostream>
using namespace std;

// Function to reverse the array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;git commit -m "reverse array"

        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    reverseArray(arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;        // store current index
            high = mid - 1;      // move left to find earlier occurrence
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {1,2,3,4,4,4,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int index = firstOccurrence(arr, n, target);

    if (index != -1)
        cout << "First occurrence at index: " << index;
    else
        cout << "Element not found";

    return 0;
}
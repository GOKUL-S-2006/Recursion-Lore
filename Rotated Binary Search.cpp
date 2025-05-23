#include <iostream>
#include <vector>
using namespace std;

int rotatedBinarySearch(const vector<int>& arr, int target, int low, int high) {
    if (low > high) return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) return mid;

    // Check if left half is sorted
    if (arr[low] <= arr[mid]) {
        // Target in the left half
        if (target >= arr[low] && target < arr[mid]) {
            return rotatedBinarySearch(arr, target, low, mid - 1);
        } else {
            return rotatedBinarySearch(arr, target, mid + 1, high);
        }
    }
    // Else right half is sorted
    else {
        // Target in the right half
        if (target > arr[mid] && target <= arr[high]) {
            return rotatedBinarySearch(arr, target, mid + 1, high);
        } else {
            return rotatedBinarySearch(arr, target, low, mid - 1);
        }
    }
}

int main() {
    vector<int> nums = { 4, 5, 6, 7, 0, 1, 2 };
    int target = 0;

    int index = rotatedBinarySearch(nums, target, 0, nums.size() - 1);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}

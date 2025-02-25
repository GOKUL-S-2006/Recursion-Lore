#include <iostream>
using namespace std;

void reverseArray(int arr[], int left, int right) {
    if (left >= right) return;  // Base case

    // Swap elements
    swap(arr[left], arr[right]);

    // Recursive call
    reverseArray(arr, left + 1, right - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input array
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Reverse array using recursion
    reverseArray(arr, 0, n - 1);

    // Print reversed array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}

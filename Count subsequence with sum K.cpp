#include <iostream>
#include <vector>
using namespace std;

int countSubsequencesWithSumK(vector<int> &arr, int index, int sum, int k) {
    if (index == arr.size()) {
        return (sum == k) ? 1 : 0;  // If sum matches K, count it
    }

    // Include the current element
    int l = countSubsequencesWithSumK(arr, index + 1, sum + arr[index], k);

    // Exclude the current element
    int r = countSubsequencesWithSumK(arr, index + 1, sum, k);

    return l+ r;  // Total count
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    // Input array
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Count of subsequences with sum " << k << ": " << countSubsequencesWithSumK(arr, 0, 0, k) << endl;

    return 0;
}

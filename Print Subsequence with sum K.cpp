#include <iostream>
#include <vector>
using namespace std;

void printSubsequencesWithSumK(vector<int> &arr, vector<int> &subseq, int index, int sum, int k) {
    if (index == arr.size()) {  
        if (sum == k) {  // Check if the sum matches K
            for (int num : subseq) 
                cout << num << " ";
            cout << endl;
        }
        return;
    }

    // Include the current element
    subseq.push_back(arr[index]);
    printSubsequencesWithSumK(arr, subseq, index + 1, sum + arr[index], k);

    // Exclude the current element
    subseq.pop_back();
    printSubsequencesWithSumK(arr, subseq, index + 1, sum, k);
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    // Input array
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> subseq;
    printSubsequencesWithSumK(arr, subseq, 0, 0, k);

    return 0;
}

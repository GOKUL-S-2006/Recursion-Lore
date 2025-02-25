#include <iostream>
#include <vector>
using namespace std;

void printSubsequences(vector<int> &arr, vector<int> &subseq, int index) {
    if (index == arr.size()) {  
        if (!subseq.empty()) {  // To avoid printing an empty subsequence
            for (int num : subseq) 
                cout << num << " ";
            cout << endl;
        }
        return;
    }

    // Pick
    subseq.push_back(arr[index]);
    printSubsequences(arr, subseq, index + 1);

    // Not Pick
    subseq.pop_back();
    printSubsequences(arr, subseq, index + 1);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    // Input array
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> subseq;
    printSubsequences(arr, subseq, 0);

    return 0;
}

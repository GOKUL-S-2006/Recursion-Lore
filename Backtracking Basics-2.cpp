#include <iostream>
using namespace std;

// Function to calculate sum of first n numbers using backtracking
int sumOfN(int i, int n) {
    if (i > n) return 0;  // Base case
    int sum = sumOfN(i + 1, n);  // Recursive call first
    return sum + i;  // Adding during backtracking
}

int main() {
    int n;
    cin >> n;
    cout << "Sum of first " << n << " numbers: " << sumOfN(1, n) << endl;
    return 0;
}

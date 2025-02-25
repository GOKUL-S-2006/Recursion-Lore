#include <iostream>
using namespace std;

// Function to print 1 to N using backtracking
void print1ToN(int i, int n) {
    if (i > n) return;
    print1ToN(i + 1, n);  // Recursive call first
    cout << i << " ";      // Printing during backtracking
}

// Function to print N to 1 using backtracking
void printNto1(int i, int n) {
    if (i > n) return;
    printNto1(i + 1, n);  // Recursive call first
    cout << i << " ";      // Printing during backtracking
}

int main() {
    int n;
    cin >> n;

    cout << "1 to N: ";
    print1ToN(1, n);
    cout << "\n";

    cout << "N to 1: ";
    printNto1(1, n);
    cout << "\n";

    return 0;
}

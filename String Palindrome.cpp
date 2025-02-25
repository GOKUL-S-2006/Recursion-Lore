#include <iostream>
using namespace std;

bool isPalindrome(string &s, int left, int right) {
    if (left >= right) return true;  // Base case: If pointers cross, it's a palindrome
    if (s[left] != s[right]) return false;  // If mismatch found, not a palindrome
    return isPalindrome(s, left + 1, right - 1);  // Recursive call
}

int main() {
    string s;
    cin >> s;

    if (isPalindrome(s, 0, s.length() - 1))
        cout << "Palindrome\n";
    else
        cout << "Not a Palindrome\n";

    return 0;
}

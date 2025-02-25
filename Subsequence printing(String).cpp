#include <iostream>
using namespace std;

void printSubsequences(string &s, string output, int index) {
    if (index == s.length()) {  
        cout << output << endl;  // Print the subsequence
        return;
    }

    // Include the current character
    printSubsequences(s, output + s[index], index + 1);

    // Exclude the current character
    printSubsequences(s, output, index + 1);
}

int main() {
    string s;
    cin >> s;
    
    printSubsequences(s, "", 0);
    
    return 0;
}

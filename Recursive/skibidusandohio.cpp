#include <iostream>
#include <string>
using namespace std;

int minimizeLength(string s) {
    int i = 0;
    while (i < s.length() - 1) {
        if (s[i] == s[i + 1]) {
            // Perform the operation: replace s[i] with any character and remove s[i+1]
            s[i] = 'a'; // Replace with any character, e.g., 'a'
            s.erase(i + 1, 1); // Remove the next character
            // Reset i to 0 to recheck the string from the beginning
            i = 0;
        } else {
            i++;
        }
    }
    return s.length();
}

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        string s;
        cin >> s; // Read the string
        int minLength = minimizeLength(s); // Compute the minimum length
        cout << minLength << endl; // Output the result
    }
    return 0;
}
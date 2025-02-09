#include <iostream>
#include <string>
using namespace std;

string toPlural(string word) {
    // Remove "us" and add "i"
    return word.substr(0, word.length() - 2) + "i";
}

int main() {
    int t;
    cin >> t;  // Read number of test cases
    
    // Read initial newline after t
    string dummy;
    getline(cin, dummy);
    
    // Process each test case
    while (t--) {
        string word;
        getline(cin, word);
        cout << toPlural(word) << endl;
    }
    
    return 0;
}
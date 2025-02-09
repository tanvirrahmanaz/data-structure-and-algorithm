#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canSort(int n, int m, vector<int>& a, vector<int>& b) {
    // Since m = 1, we only have one choice for the operation
    int b0 = b[0];
    // Create a copy of a to manipulate
    vector<int> modifiedA = a;
    // Try to sort the array by choosing whether to perform the operation on each element
    for (int i = 0; i < n; i++) {
        // Decide whether to perform the operation on a[i]
        if (b0 - modifiedA[i] < modifiedA[i]) {
            modifiedA[i] = b0 - modifiedA[i];
        }
    }
    // Check if the modified array is sorted
    for (int i = 1; i < n; i++) {
        if (modifiedA[i] < modifiedA[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(m);
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        if (canSort(n, m, a, b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
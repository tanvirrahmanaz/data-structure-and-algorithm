#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    if (k > n + m) {
        cout << "-1\n";
        return;
    }

    string s;
    int balance = 0;

    if (k <= min(n, m)) {
        for (int i = 0; i < k; i++) {
            s += '0';
            n--;
            if (m > 0) {
                s += '1';
                m--;
            }
        }
        while (n--) s += '0';
        while (m--) s += '1';
    } 
    else {
        int maxBlocks = max(n, m);
        if (k > maxBlocks) {
            cout << "-1\n";
            return;
        }

        if (n > m) {
            int extra = n - k;
            for (int i = 0; i < k; i++) {
                s += '0';
                if (extra > 0) {
                    s += '0';
                    extra--;
                }
                if (m > 0) {
                    s += '1';
                    m--;
                }
            }
            while (n-- > 0) s += '0';
            while (m-- > 0) s += '1';
        } 
        else {
            int extra = m - k;
            for (int i = 0; i < k; i++) {
                s += '1';
                if (extra > 0) {
                    s += '1';
                    extra--;
                }
                if (n > 0) {
                    s += '0';
                    n--;
                }
            }
            while (n-- > 0) s += '0';
            while (m-- > 0) s += '1';
        }
    }

    cout << s << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}

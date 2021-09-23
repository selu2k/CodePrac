#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        string s;
        cin >> s;
        size_t L = s.find('a');
        if (L == string::npos) {
            cout << "NO" << endl;
            continue;
        }
        size_t n = s.length(), R = L;
        bool yes = true;
        for (size_t i = 1; i < n; i++) {
            size_t pos = s.find(char('a' + i));
            if (pos == string::npos || (pos != L - 1 && pos != R + 1)) {
                yes = false;
                break;
            } else {
                L = min(L, pos);
                R = max(R, pos);
            }
        }
        cout << (yes ? "YES" : "NO") << endl;
    }
}
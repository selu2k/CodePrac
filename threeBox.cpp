#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int a, b, c, d;
    forn(i, t)
    {
        cin >> a >> b >> c >> d;
        if (a + b + c <= d)
        {
            cout << 1;
        }
        else if (a > d - c)
        {
            if (a + b <= d)
            {
                cout << 2;
            }
            else
            {
                cout << 3;
            }
        }
        else{cout<<2;}
        cout << "\n";
    }

    return 0;
}
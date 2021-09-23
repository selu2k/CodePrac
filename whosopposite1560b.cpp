#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll a, b, c, ans;
        cin >> a >> b >> c;
        if (abs(a - b) != 1)
        {
            if (c > 2 * (abs(a - b)) || a>2* (abs(a - b)) || b>2*(abs(a - b)) )
            {
                cout << -1 << '\n';
            }
            else
            {
                if (abs(a - b) >= c)
                {
                    ans = c + abs(a - b);
                    cout << ans << '\n';
                }
                else
                {
                    ans = c - abs(a - b);
                    cout << ans << '\n';
                }
            }
        }
        else
        {
            cout << -1 << '\n';
        }
    }

    return 0;
}
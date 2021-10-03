#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    ll n, h;
    forn(i, t)
    {
        cin >> n >> h;
        int dam, a, b;
        cin >> a >> b;
        ll max1 = max(a, b), max2 = min(a, b);
        for (int j = 2; j < n; j++)
        {
            cin >> dam;
            if (dam > max1)
            {   
                max2 = max1;
                max1 = dam;
            }
            else if (dam > max2)
            {
                max2 = dam;
            }
        }
        int count = 0;
        if (h < max1 + max2)
        {
            h = h - max1;
            count++;
            if (h > 0)
            {
                count++;
            }
        }
        else
        {
            int temp = h / (max1 + max2);
            count = 2 * temp;
            h = h - temp * (max1 + max2);
            if (h > 0)
            {
                h -= max1;
                count++;
                if (h > 0)
                {
                    count++;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}
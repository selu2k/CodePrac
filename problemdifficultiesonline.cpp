#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {
        int a[4];
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        sort(a, a + 4);
        if (a[0] != a[1] && a[1] != a[2] && a[2] != a[3])
        {
            cout << 2 << endl;
        }
        else if (a[0] != a[1] && a[1] != a[2] && a[2] == a[3] || a[0] != a[1] && a[1] == a[2] && a[2] != a[3] || a[0] == a[1] && a[1] != a[2] && a[2] != a[3] || a[0] == a[1] && a[1] != a[2] && a[2] == a[3])
        {
            cout << 2 << endl;
        }
        else if (a[0] != a[1] && a[1] == a[2] && a[2] == a[3] || a[0] == a[1] && a[1] == a[2] && a[2] != a[3])
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;
    cin>>n>>k;
    ll num;
    if(n%2 == 0)
    {
        if(k<(n/2+1))
        {
            num = k*2 -1 ;
        }
        else{
            k = k - n/2;
            num = k*2;
        }
    }
    else{
        if(k< (n+1)/2+1)
        {
            num = k*2 -1 ;
        }
        else{
            k = k - (n+1)/2;
            num = k*2;
        }
    }
    cout<<num;
    return 0;
}
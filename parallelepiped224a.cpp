#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    ll x,y,z;
    cin>>x>>y>>z;
    cout<<4*(sqrt((x*y)/z) + sqrt((y*z)/x) + sqrt((x*z)/y));

    return 0;
}
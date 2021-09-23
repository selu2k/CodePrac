#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;
    ll y= 1000000007;
    ll x= 1;
    for(int i=0;i<n;i++){
        x = (x*2)%y;
    }
    cout<<x;

    return 0;
}
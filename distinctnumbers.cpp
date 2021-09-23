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
    set<int> v;
    ll x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.insert(x);
        }
    cout<<v.size();
    return 0;
}
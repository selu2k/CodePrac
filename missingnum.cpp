#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n=0;
    cin>>n;
    ll sum=0;
    ll a=0;
    for(int i = 0;i<n-1;i++)
    {   
        cin>>a;
        sum+=a;
    }
    cout<< (n*(n+1)*0.5) -sum;

    return 0;
}
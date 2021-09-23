#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;
    ll n;
    for(int i =0;i<t;i++)
    {
        cin>>n;
        ll c1,c2;
        if(n%3 == 0)
        {
            c1 = n/3;
            c2= c1;
            cout<<c1<<" "<<c2<<'\n';
        }
        else if((n-1)%3 ==0)
        {
            c1 = (n-1)/3 +1;
            c2 = c1 -1;
            cout<<c1<<" "<<c2<<'\n';
        }
        else if((n+1)%3 ==0)
        {
            c2 = (n+1)/3;
            c1 = c2-1;
            cout<<c1<<" "<<c2<<'\n';
        }
    }

    return 0;
}
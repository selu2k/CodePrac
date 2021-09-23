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
    for(int i=0;i<t;i++)
    {
        ll num,r,c;
        cin>>num;
        ll n =1;
        while(num>n*n)
        {
            n++;
        }
        if(abs(num - (n-1)*(n-1)+1) <= abs(num-n*n))
        {
            c = n;
            r = num - ((n-1)*(n-1)+1) +1;
        }
        else{
            r = n;
            c = n*n-num  +1;
        }
        cout<<r<<" "<<c<<'\n';

    }

    return 0;
}
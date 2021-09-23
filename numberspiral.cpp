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
    ll x,y,z;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        if(y>x)
        {
            if(y%2==0)
            {
                z = (y-1)*(y-1) +1;
                cout<<z+x-1<<'\n';
            }
            else
            {
                z = y*y;
                cout<<z-x+1<<'\n';
            }
        }
        else
        {
            if(x%2 == 0)
            {
                z = x*x;
                cout<<z - y +1<<'\n';
            }
            else{
                z = (x-1)*(x-1) +1;
                cout<<z + y -1<<'\n';
            }
        }
    }

    return 0;
}
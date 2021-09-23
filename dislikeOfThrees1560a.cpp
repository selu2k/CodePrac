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
        ll n;
        cin>>n;
        ll count=0;
        int j =1;
        while(count!=n)
        {
            if(j%3 !=0 && j%10 !=3)
            {
                count++;
                if(count ==n)
                {
                    cout<<j<<'\n';
                    break;
                }
            }
            j++;
        }
    }

    return 0;
}
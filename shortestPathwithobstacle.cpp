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
    for(int i =0 ;i<t;i++)
    {
        ll x1,x2,y1,y2,y3,x3,ans;
        //int flag1,flag2;
        cin>>y1>>x1>>y2>>x2>>y3>>x3;
        // if(y1>y2){flag1 = 1;}else{flag1 = 2;}
        // if(x1>x2){flag2 = 1;}else{flag2 = 2;}
        if((x1 == x2 && x2==x3 && y3<max(y1,y2) && y3>min(y1,y2)) || (y1==y2 && y2 ==y3 && x3<max(x1,x2)&& x3>min(x1,x2))){
            ans = abs(x1-x2) + abs(y1-y2) + 2;
            cout<<ans<<'\n';
        }
        else{
            ans = abs(x1-x2) + abs(y1-y2);
            cout<<ans<<'\n';
        }
    }

    return 0;
}
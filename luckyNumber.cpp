#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    forn(i,t){
        int a ,b,c;
        cin>>a>>b>>c;
        if(a==7 || b==7 || c==7){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }

    return 0;
}

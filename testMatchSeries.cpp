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
        int a,ind=0,eng=0;
        forn(j,5){
            cin>>a;
            if(a==1){
                ind++;
            }
            else if(a==2){
                eng++;
            }
        }
        if(ind == eng){cout<<"DRAW\n";}
            else if(ind>eng){cout<<"INDIA\n";}
            else{cout<<"ENGLAND\n";}
    }

    return 0;
}
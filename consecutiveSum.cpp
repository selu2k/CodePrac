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
        ll n;
        cin>>n;
        cout<<(n-1)*-1<<" "<<n<<"\n";
    }


    return 0;
}
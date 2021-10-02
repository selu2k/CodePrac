#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    forn(i,t){
        int a,b;
        cin>>a>>b;
        if(a>0 &&b>0){cout<<"Solution\n";}
        else if(a == 0){cout<<"Liquid\n";}
        else if(b == 0){cout<<"Solid\n";}
    }

    return 0;
}
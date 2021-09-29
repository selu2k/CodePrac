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
    for(int i=0 ; i<t ; i++)
    {
        string s;
        cin>>s;
        int len = s.length();
         int countA = 0,countB=0,countC=0;
        for (int j = 0; (j = s.find('A', j)) != std::string::npos; j++) {
            countA++;
        }
        for (int j = 0; (j = s.find('B', j)) != std::string::npos; j++) {
            countB++;
        }
        for (int j = 0; (j = s.find('C', j)) != std::string::npos; j++) {
            countC++;
        }
        if( countA >countB ){cout<<"NO\n";}
        else if( countC > countB){cout<<"NO\n";}
        else if( (countB-countA)!= countC ){cout<<"NO\n";}
        else{cout<<"YES\n";}

    }

    return 0;
}
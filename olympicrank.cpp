#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int g1,s1,b1,g2,s2,b2;
    for(int i=0;i<n;i++)
    {
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        if(g1 == g2){
            if(s1 == s2){
                if(b1>b2) cout<<1<<'\n';
                else cout<<2<<'\n';
            }
            else{
                if(s1>s2) cout<<1<<'\n';
            else cout<<2<<'\n';
            }
        }else{
            if(g1>g2) cout<<1<<'\n';
            else cout<<2<<'\n';
        }
    }


    return 0;
}
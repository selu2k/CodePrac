#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;
    //ll temp =n;
    int d=0;
    int flag = -1;
    int count=0;
    while(n>0)
    {
        d = n%10;
        if(d ==4 || d==7){
            count++;
        }
        n = n/10;
    }
    if(count == 4 || count ==7){cout<<"YES";}
    else{cout<<"NO";}

    return 0;
}

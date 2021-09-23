#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int total=0,temp,ans=0;

    for(int i=0;i<n;i++)
    {
        cin>>temp;
        total+=temp;
    }
    for(int i=1;i<=5;i++)
    {
        if((total +i)%(n+1) !=1)
        {
            ans+= 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
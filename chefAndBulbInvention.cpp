#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin>>num;
    ll n,k,p;
    for(int j=0;j<num;j++){
    
    cin>>n>>p>>k;
    int count=0;
    int key = p%k;

    for(int i=0;i<=key;i++)
    {
        int temp=i;
        while(temp<=n){
            temp = temp + k;
            count++;
        }
        if(i == key)
        {
            while(temp!= p)
            {
                count++;
            }
        }
    }
    cout<<count+1<<'\n';
    }
    

    /*for(int i=0;i<=n;i++)
    {
        if(i%k< key)
        {
            count++;
        }
        else if(i%k == key)
        {
            if(i<p){
                count++;
            }
        }
    }
    cout<<count<<'\n';
    }*/


    return 0;
}
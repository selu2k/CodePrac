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
    ll count=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i!=0){
            if(arr[i]<arr[i-1])
            {
                count = count +arr[i-1]-arr[i];
                arr[i] = arr[i-1];
            }
        }
    }
    
    cout<<count;
    return 0;
}
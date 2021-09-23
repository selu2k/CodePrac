#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    int arr[n];
    forn(i,n){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int arm[m];
    forn(i,m){
        cin>>arm[i];
    }
    int maxi = 0,count=0,temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arm[j]%arr[i] == 0){
                if(arm[j]/arr[i] == maxi){
                    count++;
                }
                else if(arm[j]/arr[i] > maxi){
                    count =1;
                    maxi = arm[j]/arr[i] ;
                }
            }
        }
    }
    

    cout<<count;
    return 0;
}
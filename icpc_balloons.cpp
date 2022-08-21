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
    cin >> t;
    forn(i, t){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int>map;
        int ans=0;
        for(int i = 0 ; i<n ; i++){
            if(map[s[i]]==0){
                ans += 2;
                map[s[i]]++;
            }else{
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
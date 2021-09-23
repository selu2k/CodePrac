#include <bits/stdc++.h>
  
using namespace std;
 
// Driver Code
int main()
{
    //hellllloooooooo
    int n=0,m=0;
    cin>>n>>m;
    int temp;
    queue<pair<int,int>> gq;
    for(int i=1;i<=n;i++){
        cin>>temp;
        gq.push({i,temp});
    }

    while(gq.size()!=1)
    {
        if(gq.front().second <=m)
        {
            gq.pop();
        }
        else{
            gq.front().second = gq.front().second - m;
            gq.push(gq.front());
            gq.pop();
        }
    }
    cout<<gq.front().first;

  
    return 0;
}
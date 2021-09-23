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
    queue <pair<int,int>> q;
    int pg;
    int sum=0;
    for(int i=1;i<=7;i++)
    {
        cin>>pg;
        sum=sum+pg;
        q.push({i,pg});
    }
    if(n>sum){
        n = n%sum;
    }
    if(n==0){
        int nonzero=0;
        for(int i=0;i<7;i++)
        {
            if(q.front().second !=0)
            {
                nonzero = q.front().first;
                q.pop();
            }
            else{q.pop();}
            
        }
        cout<<nonzero;
        exit;
        
    }else{
    while(n>0)
    {
        if(n>q.front().second)
        {
            n = n - q.front().second;
            if(n <= 0){
                cout<<q.front().first;
                exit;
                break;
            }
            else{q.pop();}
        }
        else{
            cout<<q.front().first;
            exit;
            break;
        }
        
    }
    }

    return 0;
}
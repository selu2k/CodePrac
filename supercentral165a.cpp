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
    int count=0;
    int x,y;
    vector <pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back({x,y});
    }
    int f1=-1;
    int f2=-1;
    int f3=-1;
    int f4=-1;
    for(int i=0;i<n;i++)
    {
        f1=-1;
        f2=-1;
        f3=-1;
        f4=-1;
        for(int j=0;j<n;j++)
        {
            if(v[i].first<v[j].first && v[i].second == v[j].second && f1!=1)
            {
                f1=1;
            }
            if(v[i].first>v[j].first && v[i].second == v[j].second && f2!=1)
            {
                f2=1;
            }
            if(v[i].first == v[j].first && v[i].second > v[j].second && f3!=1)
            {
                f3=1;
            }
            if(v[i].first == v[j].first && v[i].second < v[j].second && f4!=1)
            {
                f4=1;
            }
            if(f1==1 && f2==1 && f3==1 && f4==1)
            {
                count++;
                
                //cout<<v[i].first<<" "<<v[i].second<<'\n';
                break;
            }
        }
    }
    cout<<count;


    return 0;
}
#include<iostream>
#include<map>

using namespace std;

int main()
{
    int n,m;
    map <int,int> mymap;
    long long vas=0;
    long long pett=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mymap[x]=i;
    }
    cin>>m;
    for(int j=0;j<m;j++)
    {
        int y;
        cin>>y;
        vas = vas + mymap[y] +1;
        pett = pett + n-mymap[y] ;
    }
    cout<<vas<<" "<<pett;

    return 0;
}
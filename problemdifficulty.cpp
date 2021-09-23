#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    /*int n;
    cin>>n;
    int count=0;
    int p1,p2,p3,p4;
    int arr[4];
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<4;j++)
        {    
            cin>>arr[i];
        }

    }*/
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        vector<int> v;
        int a=0,count=0;
        for(int j=0;j<4;j++)
        {
            cin>>a;
            v.push_back(a);
        }
        int j =0;
        while(v[j])
        {
            if(v[0]!=v[j])
            {
                count++;
                v.erase(v.begin());
                v.erase(v.begin()+j);
                j=1;
            }
            j++;
        }
        cout<<count<<'\n';
        
        // for(int k=0;k<4;k++)
        // {   
        //     for(int x = k;x<4;x++)
        //     {
        //         if(v[k] !=v[x]){
        //             count++;
        //             v.erase(v.begin()+k);
        //             v.erase(v.begin()+x);
        //         }
        //     }
        // }
            
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[4][4];
   for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            arr[i][j]=0;
        }
    } 
    int temp;
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            cin>>temp;
            arr[i][j]=temp;
        }
    }
    int sum;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            sum=0;
            sum = arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i-1][j]+arr[i][j-1];
            
            if(j!=3)
            {
                if(sum%2==0){
                    cout<<1;
                }else{cout<<0;}
            }
            else{
                if(sum%2==0){
                    cout<<1<<'\n';
                }
                else{cout<<0<<'\n';}
            }
        }
    }



    return 0;
}
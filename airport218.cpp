#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int n , m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int min=0,max=0,num=arr[0],k=0;
    for(int i=0;i<n;i++)
    {
        min = min +num;
        num--;
        if(num == 0)
        {
            k++;
            num = arr[k];
        }
    }
    sort(arr,arr+m,greater<int>());
    //num = arr[0],k=0;
    for(int i=0;i<n;i++)
    {
        max = max+arr[0];
        arr[0]--;
        sort(arr,arr+m,greater<int>());
        /*for(int i =1 ;i<m;i++){
            if(arr[i]<=arr[i-1])
            {
                break;
            }
            swap(arr[i],arr[i-1]);
        }*/
    }
    cout<<max<<" "<<min;
    return 0;
}

/*Pashmak decided to give Parmida a pair of flowers from the garden. There are n flowers in the garden and the i-th of them has a beauty number bi. Parmida is a very strange girl so she doesn't want to have the two most beautiful flowers necessarily. She wants to have those pairs of flowers that their beauty difference is maximal possible!

Your task is to write a program which calculates two things:

The maximum beauty difference of flowers that Pashmak can give to Parmida.
The number of ways that Pashmak can pick the flowers. Two ways are considered different if and only if there is at least one flower that is chosen in the first way and not chosen in the second way.
Input
The first line of the input contains n (2 ≤ n ≤ 2·105). In the next line there are n space-separated integers b1, b2, ..., bn (1 ≤ bi ≤ 109).

Output
The only line of output should contain two integers. The maximum beauty difference and the number of ways this may happen, respectively.*/

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
    int max=0,arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    max = abs(arr[0] - arr[n-1]);

    ll front=1,back=1;
    ll count;
    if(arr[0]!=arr[n-1])
    {
    for(int i = 1;i<n;i++)
    {
        if(arr[i]==arr[0]){
            front++;
        }
        else{break;}
    }
    for(int i = n-2;i>=0;i--)
    {
        if(arr[i]==arr[n-1]){
            back++;
        }
        else{break;}
    }
    count = front*back;
    }else{count=n*(n-1)*0.5;}

    

    /*for(int i =0 ; i<n;i++)
    {
        for(int j =i;j<n;j++)
        {
            if(abs(arr[i]-arr[j])==max)
            {
                //count++;
            }
        }
    }*/
    cout<<max<<" "<<count;
    return 0;
}
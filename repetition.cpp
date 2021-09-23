/*You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.*/


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool comp(ll a, ll b)
{
    return (a < b);
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;

    ll maximum=1;
    ll count =1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
            maximum = max(count,maximum,comp);
        }
        else{count = 1;}
    }//aatcgggc
    cout<<maximum;



    return 0;
}
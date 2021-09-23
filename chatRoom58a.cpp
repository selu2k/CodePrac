/*Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. Vasya typed the word s. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so that it resulted in the word "hello". For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello, and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello. Determine whether Vasya managed to say hello by the given word s.

Input
The first and only line contains the word s, which Vasya typed. This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.

Output
If Vasya managed to say hello, print "YES", otherwise print "NO".

Examples*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;
    int h = s.find("h");
    int e =s.find("e",h+1);
    int l1= s.find("l",e+1);
    int l2 = s.find("l",l1+1);
    int o = s.find("o",l2+1);
    if(s.size()>=5){
    if(h!= string::npos && e!= string::npos && l1!= string::npos && l2!= string::npos && o!= string::npos){
    if(h<e && e<l1 && l1 <l2 && l2<o)
    {
        cout<<"YES";
        //cout<<l2;
    }
    else{
        cout<<"NO";
    }}
    else{cout<<"NO";}
    }
    else{cout<<"NO";}

    return 0;
}
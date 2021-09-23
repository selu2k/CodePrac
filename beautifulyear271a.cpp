#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int year,ye;
    cin>>ye;
    for(int j = 1;j<1000;j++){
    year = ye+j;
    int digit[4];
    int temp = year;
    for(int i = 0;i<4;i++)
    {
        digit[i]= year % 10;
        
        year = year/10;
    
    }
    sort(digit,digit+4);
    int flag=-1;
    for(int i=0;i<3;i++){
        if(digit[i]==digit[i+1])
        {   
            flag=1;
            break;
        }
    }
    if(flag == -1)
    {cout<<temp;break;}
    else{continue;}
    }
    return 0;
}
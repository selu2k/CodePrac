#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int arr[5][5];
    int pc=-1,pr=-1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1){
                pc=j;
                pr=i;
            }
        }
    }
    int steps;
    steps = abs( 2 - pr) + abs( 2- pc);
    cout<<steps;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sumx =0 ,sumy =0,sumz =0;
    for(int i = 0 ; i<n ; i++){
        int xx,yy,zz;
        cin>>xx;
        sumx = sumx + xx;
        cin>>yy;
        sumy = sumy + yy;
        cin>>zz;
        sumz = sumz + zz;

    }
 
    if(sumx == 0 && sumy==0 && sumz==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
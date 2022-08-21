// string len -10 
// if changes less than int k. then similar
// return string which most similar to others in case of collision return lower string. 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// #define forn(i, n) for (int i = 0; i < int(n); i++)
string mostsimilar(vector<string> codes, int k){
    int n = codes.size();
    vector<string>res;
    int maxCount=-1;
    vector<vector<int>> v(n+1,vector<int>(n+1,0));
    for(int i = 0; i<n ; i++){
        int count=0;
        for (int j = 0; j < n; j++)
        {   
            if(i!=j){
                if(v[j][i]!=0){
                    if(v[j][i]==1){
                        count++;
                    }
                }else{
                    int tempCount=0;
                    for(int k = 0; k<10 ; k++){
                        if(codes[i][k]!=codes[j][k]){
                            tempCount++;
                        }
                    }
                    if(tempCount<k){
                        count++;
                        v[i][j]=1;
                        //v[j][i]=1;
                    }else{
                        v[i][j]=-1;
                        //v[j][i]=-1;
                    }
                }
            }
        }
        if(count>maxCount){
            maxCount = count;
            res.clear();
            res.push_back(codes[i]);
        }
        else if(count == maxCount) res.push_back(codes[i]);
    }
    if(res.size()>1){
        sort(res.begin(),res.end());
        return res[0];
    }
    if(res.size()==1) return res[0];
    return "-1";
}

int main()
{
    vector<string>codes;
    int k;
    cin>>k;
    int n;
    cin>>n;
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        codes.push_back(temp);
    }
    cout<<mostsimilar(codes,k)<<endl;
    
    return 0;
}
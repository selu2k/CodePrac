// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define forn(i, n) for (int i = 1; i < int(n); i++)

// int main()
// {
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ll n,m;
//     cin>>n>>m;
//     vector<string> s(n+2);
//     s[0] = "";
//     for(int i = 0; i<m;i++){
            
//             s[0]= s[0] + "a";
//     }
//     s[n+1]=s[0];
//     string a;
//     for(int i = 1; i<=n;i++){
//             cin>>a;
//             s[i]= a;
//     }
//     for(int i = 1; i<=n;i++){
//             s[i] = s[i] + "a";
//             s[i]= "a" + s[i];
//     }
//     forn(i,n+1){
//         forn(j,m+1){
//             if(s[i][j]=='.')
//             {
//                 if(s[i-1][j]=='B' || s[i+1][j]=='B' || s[i][j+1]=='B' || s[i][j-1]=='B')
//                 {
//                     s[i][j]='W';
//                 }
//                 else if(s[i-1][j]=='W' || s[i+1][j]=='W' || s[i][j+1]=='W' || s[i][j-1]=='W' ){s[i][j]='B';}
//                 else{s[i][j]='W';}            
//             }
//         }
//     }
//     // forn(i,n+1){
//     //     forn(j,m+1){
//     //         if(j!=m){
//     //         cout<<s[i]<<;}else{cout<<s[i][j]<<'\n';}
//     //     }
//     // }
//     for(int i = 1; i<=n;i++){
        
//             s[i] = s[i].substr(1,m) ;   
//             cout<<s[i]<<'\n';
//     }
//     return 0;
// }

#include <cstdio>
using namespace std;
 
int n, m;
char S[1100];
 
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", S);
		for (int j = 0; j < m; j++)
			if (S[j] == '.') {
				if ((i + j) % 2 !=0)	S[j] = 'W';
				else	S[j] = 'B';
			}
		printf("%s\n", S);
	}
}
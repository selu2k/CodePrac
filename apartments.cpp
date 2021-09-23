/*#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,m,k;
    cin>>n>>m>>k;
    vector<int> vn;
    vector<int> vm;
    ll temp;
    int count=0;
    forn(i,n){
        cin>>temp;
        vn.push_back(temp);
    }
    forn(i,m){
        cin>>temp;
        vm.push_back(temp);
    }
    sort(vn.begin(),vn.end());
    sort(vm.begin(),vm.end());
    
    while(vm.size()>0){
        if((vm.front()+k) >= vn.front() && (vm.front() - k) <= vn.front()){
            count++;
            vn.erase(vn.begin());
            vm.erase(vm.begin());
        }
        else{
            if(vn.front() - vm.front()> k ){ vm.erase(vm.begin());}

            else{
                vn.erase(vn.begin());
            }
        }
    }
    cout<<count;
    return 0;
}*/
#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 2e5;

/*	
 * Variables used for the current problem
 * n: number of applicants
 * m: number of apartments
 * k: max diff between desired and actual size
 * a and b: arrays for applicants and apartments respectively
 */
int n, m, k, a[MAX_N], b[MAX_N], ans;

void solve() {
	cin >> n >> m >> k;
	for (int i = 0; i < n; ++i) cin >> a[i];
	for (int i = 0; i < m; ++i) cin >> b[i];
	sort(a, a + n);
	sort(b, b + m);
	int i = 0, j = 0;
	while (i < n && j < m){
		// Found a suitable apartment for the applicant
		if (abs(a[i] - b[j]) <= k){
			++i; ++j;
			++ans;
		}
		else{
			// If the desired apartment size of the applicant is too big,
			// move the apartment pointer to the right to find a bigger one
			if (a[i] - b[j] > k){
				++j;
			}
			// If the desired apartment size is too small,
			// skip that applicant and move to the next person
			else{
				++i;
			}
		}
	}
	cout << ans << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
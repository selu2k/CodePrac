// This problem looks difficult at the first glance because of the input ranges are large for the given three integers. Using bruteforce to print all possibilities/combination is difficult, but the problem states that only print one possibility is enough.

// Therefore, it is only needed to loop ten possibilities (0 to 9) on the right of the number a to check if it is divisible by number b. If yes, we just need to print a, followed by this digit and n – 1 times of zeros because this number is also divisible by b.

// If none combination of the number a * 10 + x where x is from 0 to 9, divisible by b, we just print -1.

#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;
 // any one possibity can be printed
int main(){
    int a,b,n;
    cin >> a >> b >> n;
    long long ans = a;
    int flag = 0;
    for (int j = 0; j < 10; j++)
    {
        ans = a * 10 + j;
        if (ans % b == 0)
        {
            flag = 1;
            cout << ans;
            for (int k = 1; k < n; k++)
                cout << 0;
            return 0;
        }
    }
    if (!flag) cout << -1 << endl;
    return 0;
}

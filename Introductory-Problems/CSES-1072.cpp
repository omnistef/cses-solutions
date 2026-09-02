#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long n;
    cin >> n;
    for(long long k = 1; k <= n; k++) {
         long long p = (k * k * (k * k - 1)) / 2;
         long long c = 4 * (k - 1) * (k - 2);
         long long ans = p - c;
         cout << ans << endl;
    }
    return 0;
}

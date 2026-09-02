#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent endl
#define MOD 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;

    ll ans = 1;
    for(int i = 1; i <= n; i++) {
        ans = (ans * 2) % MOD; 
    }

    cout << ans;
    return 0;

}

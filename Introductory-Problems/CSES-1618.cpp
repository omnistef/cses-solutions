#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
        ll n;
        cin >> n;
        ll p = 5, ans = 0;

        while(p <= n) {
            ans += n / p;
            p *= 5;
        }

        cout << ans << ent;
        return 0;

}

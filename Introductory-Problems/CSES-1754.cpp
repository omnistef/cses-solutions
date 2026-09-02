#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t, a, b;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        ll m = a + b;
        if(m % 3 != 0) {
            cout << "NO" << ent;
            continue;
        }
        m /= 3;
        if(a - m < 0 || b - m < 0) {
            cout << "NO" << ent;
            continue;
        }

        cout << "YES" << ent;

    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       
       int n;
       cin >> n;
       vector<ll> a(n);
       for(int i = 0; i < n; i++) {
            cin >> a[i];
       }

       ll curr = a[0], sum = a[0];
       for(int i = 1; i < n; i++) {
          curr = max((ll)a[i], curr + a[i]);
          sum = max(sum, curr);
       }

       cout << sum << ent;
       return 0;
}

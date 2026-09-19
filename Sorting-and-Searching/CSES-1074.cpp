#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    vector<ll> a(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int med = (0 + N - 1) / 2;
    ll ans = 0;
    for(int i = 0; i < N; i++) {
        ans += abs(a[med] - a[i]);
    }

    cout << ans << ent;
    return 0;
}

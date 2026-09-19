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

    ll R = 0;
    for(int i = 0; i < N; i++) {
        if(a[i] <= R + 1) {
            R += a[i];
        } else {
            break;
        }
    }

    cout << R + 1 << ent;
    return 0;
}

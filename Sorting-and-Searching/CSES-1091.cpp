#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    multiset<int> ms;

    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    for(int i = 0; i < n; i++) {
        cin >> h[i];
        ms.insert(h[i]);
    }
    vector<int> t(m);
    for(int i = 0; i < m; i++) {
        cin >> t[i];
    }

    for(int i = 0; i < m; i++) {
        auto it = ms.upper_bound(t[i]);
        if(it == ms.begin()) {
            cout << -1 << ent;
            continue;
        }
        --it;
        int prev = *it;
        cout << prev << ent;
        ms.erase(it);
    }

    return 0;
}

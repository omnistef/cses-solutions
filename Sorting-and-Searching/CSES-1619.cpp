#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<pair<int, int>> ev;
    int a, b;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        ev.push_back({a, +1});
        ev.push_back({b, -1});
    }

    sort(ev.begin(), ev.end());
    
    int current = 0, maxim = 0;
    for(auto [ora, tip] : ev) {
        current += tip;
        if(current > maxim) {
            maxim = current;
        }
    }

    cout << maxim << ent;
    return 0;
}

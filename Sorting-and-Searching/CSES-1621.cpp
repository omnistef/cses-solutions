#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> uset;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        uset.insert(a[i]);
    }

    cout << uset.size() << ent;
    return 0;    
}

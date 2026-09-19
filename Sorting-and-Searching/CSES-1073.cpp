#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    multiset<int> ms;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        auto it = ms.upper_bound(x);
        if(it != ms.end()) {
            ms.erase(it);
        }
        ms.insert(x);
    }

    cout << ms.size() << ent;
    return 0;
}

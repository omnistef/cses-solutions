#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<pair<int, int>> p;
        for(int i = 0; i < n; i++) {
            p.push_back({v[i], i + 1});
        }

        sort(p.begin(), p.end());

        int st = 0, dr = n - 1;
        int c1 = 0, c2 = 0;
        while(st < dr) {
            if(p[st].first + p[dr].first == x) {
                c1 = p[st].second;
                c2 = p[dr].second;
                break;
            }
            if(p[st].first + p[dr].first < x) {
                st++;
            } else {
                dr--;
            }
        }

        if(c1 == 0 && c2 == 0) {
            cout << "IMPOSSIBLE";
            return 0;
        }

        if(c1 > c2)
            swap(c1, c2);

    cout << c1 << " " << c2 << ent;
    return 0;
}

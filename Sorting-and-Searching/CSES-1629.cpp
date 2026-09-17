#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    vector<pair<int,int>> v;
    for(int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
    });
    
    int count = 1, last = v[0].second;
    for(int i = 1; i < v.size(); i++) {
        if(v[i].first >= last) {
            count++;
            last = v[i].second;
        }
    }

    cout << count << ent;

   return 0;
}

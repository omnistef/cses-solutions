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
    set<ll> S;
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int curr = 0, m = 0;
    int st = 0, dr = 0;
      while(dr < N) {
          if(S.count(a[dr]) == 0) {
            S.insert(a[dr]);
            curr = dr - st + 1;
            dr++;
          } else {
            S.erase(a[st]);
            st++;
          }
         m = max(m, curr);
      }

    cout << m << ent;
    return 0;
}

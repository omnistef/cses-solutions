#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;

    if(n == 1 || n == 2) {
        cout << "NO" << ent;
        return 0;
    }

    ll gauss= n * (n + 1) / 2;
    if(gauss % 2 != 0) {
        cout << "NO" << ent;
        return 0;
    }
    
    ll sum = 0;
    ll t = gauss / 2;
    vector<ll> a;

    for(int i = n; i >= 1; i--) {
        if(sum + i <= t) {
            sum += i;
            a.push_back(i);
        } else if (sum + i > t) {
            continue;
        } else {
            break;
        }
    }

    cout << "YES" << ent;
    cout << (int)a.size() << ent;
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

        cout << ent;

    int p = 0;
    cout << n - (int)a.size() << ent;
    for(int i = n; i >= 1 ; i--) {
       if(p < (int)a.size() && i == a[p]) {
          p++;
       } else {
          cout << i << " ";
       }
    }

        return 0;
}

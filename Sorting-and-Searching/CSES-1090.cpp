#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    int st = 0, dr = n - 1;
    int count = 0;
    while(st <= dr) { 
        if(a[st] + a[dr] <= x) {
            st++;
            dr--;
        } else {
            dr--;
        }
        count++;
    }

    cout << count << ent;
    return 0;
}

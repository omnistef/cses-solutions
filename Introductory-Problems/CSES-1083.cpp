#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int fr[2000005];
    for(int i = 0; i < n - 1; i++) {
        cin >> a[i];
        fr[a[i]] = 1;
    }

    for(int i = 1; i <= n; i++) {
        if(fr[i] == 0) {
            cout << i;
            break;
        }
    }
    
    return 0;

}

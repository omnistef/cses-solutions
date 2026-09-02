#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        int y, x;
        cin >> y >> x;
        long long s = max(y, x);
        if(s & 1) {
            cout << s * s - (y - 1) - (s - x) << endl;
        } else {
            cout << s * s - (x - 1) - (s - y) << endl;
        }
    }
      return 0;
}

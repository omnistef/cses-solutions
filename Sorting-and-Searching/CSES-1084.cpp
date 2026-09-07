#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int n, m, k;
    cin >> n >> m >> k;
    
    int a[200005];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int b[200005];
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + m);
    
    int i = 0, j = 0, c = 0;
    while(i < n && j < m) {
      
        if(b[j] < a[i] - k) {
            j++;
        } else if(b[j] >= a[i] - k && b[j] <= a[i] + k) {
            i++;
            j++;
            c++;
        } else {
            i++;
        }
   
    }
   
   cout << c << ent;
   return 0;
}

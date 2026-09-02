#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    ll n = s.size();

    int freq[26] = {0};
    for(int i = 0; i < n; i++) {
        char c = s[i];
        freq[c - 'A']++;
    }
    
    int d = 0;
    for(int i = 0; i < 26; i++) {
        if(freq[i] % 2 != 0)
            d++;
    }
    
    string ans;
    if(n % 2 == 0) {
        if(d > 0) {
            cout << "NO SOLUTION" << ent;
            return 0;
        }

       for(int i = 0; i < 26; i++) {
           int m = freq[i] / 2;
           while(freq[i] > m) {
               char c = 'A' + i;
               ans += c;
               freq[i]--;
           }
       }

     int l = ans.size() - 1;
     while(l >= 0) {
        ans += ans[l];
        l--;
     }
   } else {
        if(d > 1) {
            cout << "NO SOLUTION" << ent;
            return 0;
        }
        string odd;
        for(int i = 0; i < 26; i++) {
            if(freq[i] % 2 == 1) {
              char c = 'A' + i;
                while(freq[i] > 0) {
                    odd += c;
                    freq[i]--;
                }
            }
        }

        for(int i = 0; i < 26; i++) {
            int m = freq[i] / 2;
            if(freq[i] % 2 == 0) {
             while(freq[i] > m) {
                 char c = 'A' + i;
                 ans += c;
                 freq[i]--;
            }
         }
      }

      ans += odd;

    for(int i = 25; i >= 0; i--) {
        if(freq[i] > 0) {
            while(freq[i] > 0) {
                char c = 'A' + i;
                ans += c;
                freq[i]--;
            }
        }
    }

   }

    cout << ans << ent;
    return 0;

}

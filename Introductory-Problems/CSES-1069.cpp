#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;    

    int max = 1, fx = 1;

    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i - 1])
            max++;
        else {
            if(max > fx) {
                fx = max;
            }
          max = 1;
        }
    }

    if(max > fx)
        fx = max;

    cout << fx;
    return 0;

}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent '\n'

vector<string> gray(int n) {
    if(n == 1) {
        vector<string> baza;
        baza.push_back("0");
        baza.push_back("1");
        return baza;
    }

    vector<string> mic = gray(n - 1);
    vector<string> rez;

    for(string x : mic) {
        rez.push_back("0" + x);
    }

    for(int i = mic.size() - 1; i >= 0; i--) {
        rez.push_back("1" + mic[i]);
    }
    
    return rez;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(string x : gray(n))
        cout << x << ent;

    return 0;

}

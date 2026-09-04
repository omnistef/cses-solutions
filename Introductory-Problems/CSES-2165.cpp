#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ent '\n'

void hanoi(int n, int S, int D, int A) {
    if(n == 1) {
        cout << S << " " << D << ent;
        return;
    }

    hanoi(n - 1, S, A, D);
    cout << S << " " << D << ent;
    hanoi(n - 1, A, D, S);

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << ent;
    hanoi(n, 1, 3, 2);
    return 0;

}

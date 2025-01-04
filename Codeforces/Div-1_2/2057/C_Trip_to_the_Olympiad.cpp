/**
 * author : nxtsourav7
 * created : 2025-01-04 21:58:36
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void S0LVE() {
    int l, r;
    cin >> l >> r;

    int a = r;
    int b = 0;
    for(int i = 30; i >= 0; --i) {
        if((a >> i) & 1) {
            int one = (1 << i) - 1;
            if((b | one) < l) {
                b |= (1 << i);
                if((a ^ (1 << i)) >= l) a ^= (1 << i);
            }
        }
        else {
            if((b | (1 << i)) <= r) b |= (1 << i);
        }
    }

    cout << a << " " << b << " ";
    // cout << (a ^ b) << endl;
    int c = l;
    while(c == a || c == b) c++;
    cout << c << endl;
    
    // if(a == b + 1) cout << b - 1 << endl;
    // else cout << a - 1 << endl;
}

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    bool testCase = true;
    int Q = testCase ? (cin >> Q, Q) : 1;
    for(int tc = 1; tc <= Q; ++tc) S0LVE();
    return 0;
}
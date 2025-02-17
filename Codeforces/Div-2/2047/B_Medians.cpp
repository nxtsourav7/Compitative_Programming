/**
 *	author 	: nxtsourav7
 *	created : 2024-12-04 19:03:49
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define test(T) for(int t = 1; t <= T; ++t)
#define fastIO cin.tie(0)->sync_with_stdio(0)

void solve() {
    int n, k;
    cin >> n >> k;

    // corner case
    if(n == 1) {
        cout << "1\n1";
        return;
    }

    // -1
    if(k == 1 or k == n) {
        cout << "-1";
        return;
    }

    cout << 3 << endl;
    cout << "1 " << k - k % 2 << " " << k + 1 + k % 2;
}

int32_t main() {
    fastIO;
    bool Q = true;
    int T = Q? (cin >> T, T) : 1;
    test(T) {
        solve();
        cout << endl;
    }
    
    return 0;
}
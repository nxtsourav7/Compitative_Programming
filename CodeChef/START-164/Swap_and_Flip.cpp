/**
 *	author 	: nxtsourav7
 *	created : 2024-12-11 20:44:24
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
    int n;      cin >> n;
    string s, t;
    cin >> s >> t;

    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        if(s[i] != t[i]) cnt++;
    }

    cout << ((cnt & 1) ? "NO" : "YES");
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
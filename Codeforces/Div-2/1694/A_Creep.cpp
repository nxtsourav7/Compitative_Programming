/**
 *	author 	: nxtsourav7
 *	created : 2025-01-02 16:00:30
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define echo(i, a) for(auto& i: a) 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define test(Q) int Q; cin >> Q; while(Q--)

void solve(int tc) {
    int a, b;
    cin >> a >> b;

    string ans = "";
    for(int i = 0; i < max(a, b); i++) {
        if(i < a) ans += '0';
        if(i < b) ans += '1';
    }
    cout << ans;
}

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int Q = 1; cin >> Q;
    for(int tc = 1; tc <= Q; tc++) {
        solve(tc);
        cout << endl;
    }
    return 0;
}
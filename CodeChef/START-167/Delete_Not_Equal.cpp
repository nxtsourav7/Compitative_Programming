/**
 *	author 	: nxtsourav7
 *	created : 2025-01-01 20:34:23
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

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int zero = count(all(s), '0');

    if(zero == 0 || zero == n) cout << n;
    else cout << 1;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    test(Q) {
        solve();
        cout << endl;
    }
    return 0;
}
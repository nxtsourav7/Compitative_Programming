/**
 *	author 	: nxtsourav7
 *	created : 2024-12-19 18:40:50
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
    int n, m, k;
    cin >> n >> m >> k;

    int tmp = n / m + min(n % m, 1LL);
    if(n - tmp > k) cout << "YES";
    else cout << "NO";
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
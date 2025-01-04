/**
 *	author 	: nxtsourav7
 *	created : 2025-01-01 20:42:09
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
    cin >> n;
    vector<int> a(n);
    for(auto& i: a) cin >> i;

    int first = a[0];
    sort(all(a));
    int idx = lower_bound(all(a), first) - a.begin();
    // cerr << idx << endl;
    if(idx == n - 1) {
        int tmp = (a[n - 2] + first + 1) / 2;
        cout << 1e6 - tmp + 1;
    }
    else if(idx == 0) {
        int tmp = (a[1] + first)/ 2;
        cout << tmp;
    }
    else {
        int tmp1 = (a[idx - 1] + first + 1) / 2;
        int tmp2 = (a[idx + 1] + first) / 2;
        cout << tmp2 - tmp1 + 1;
    }
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
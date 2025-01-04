/**
 *	author 	: nxtsourav7
 *	created : 2025-01-01 22:21:06
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
    vector<int> r(n);
    
    r[0] = 1;
    r[n - 1] = (n + 1) / 2;
    r[n / 2] = n;

    int mid = (n + 1) / 2;

    for(int i = 1; i < n/ 2; i++) {
        r[i] = mid + i;
    }

    for(int i = n / 2 + 1; i < n - 1; i++) {
        r[i] = mid - (n - i - 1);
    }


    // echo(i, r) cerr << i << " ";
    // cerr << endl;

    for(int i = 0; i < n; ++i) {
        for(int j = i; j < n + i; ++j) {
            cout << r[j % n] << " ";
        }
        cout << endl;
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
/**
 * author : nxtsourav7
 * created : 2025-01-04 21:12:12
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void S0LVE() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> mp;
    for(auto& x: a) {
        cin >> x;
        mp[x]++;
    }
    
    vector<int> v;
    for(auto [_, x] : mp) v.push_back(x);
    sort(all(v));

    int ans = sz(v);
    for(int i = 0; i < sz(v) - 1; ++i) {
        if(v[i] <= k) {
            k -= v[i];
            ans--;
        }
        else break;
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    bool testCase = true;
    int Q = testCase ? (cin >> Q, Q) : 1;
    for(int tc = 1; tc <= Q; ++tc) S0LVE();
    return 0;
}
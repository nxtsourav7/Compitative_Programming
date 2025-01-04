/**
 *	author 	: nxtsourav7
 *	created : 2025-01-01 16:16:18
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

void S0LVE() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> pre(n), suf(n);
    set<char> ST;
    for(int i = 0; i < n; i++) {
        ST.insert(s[i]);
        pre[i] = sz(ST);
    }
    ST.clear();
    for(int i = n - 1; i >= 0; i--) {
        ST.insert(s[i]);
        suf[i] = sz(ST);
    }

    int ans = 0;
    for(int i = 0; i < n - 1; ++i) {
        ans = max(ans, pre[i] + suf[i + 1]);
    }
    cout << ans;
}

void S1LVE() {
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    vector<int> pre(26), suf(26);
    for(auto c: s) suf[c - 'a'] += 1;
    for(int i = 0; i < n - 1; ++i) {
        suf[s[i] - 'a'] -= 1;
        pre[s[i] - 'a'] += 1;

        int cnt = 0;
        for(int i = 0; i < 26; ++i) {
            if(pre[i]) cnt += 1;
            if(suf[i]) cnt += 1;
        }
        ans = max(ans, cnt);
    }
    cout << ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    test(Q) {
        // S0LVE();
        S1LVE();
        cout << endl;
    }
    return 0;
}
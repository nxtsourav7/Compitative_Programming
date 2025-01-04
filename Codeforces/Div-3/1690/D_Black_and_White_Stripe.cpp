/**
 *	author 	: nxtsourav7
 *	created : 2025-01-02 16:13:40
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void S0LVE(int tc) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // two pointer
    int black = 0, white = 0;
    int l = 0, r = 0;
    int max_cnt = 0;
    while(r < n) {
        if(s[r] == 'B') black += 1;
        else white += 1;
        if(r - l + 1 > k) {
            if(s[l] == 'B') black -= 1;
            else white -= 1;
            l += 1;
        }
        r += 1;
        max_cnt = max(max_cnt, black);
    }
    cout << max(0LL, k - max_cnt);
}

void S1LVE(int tc) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // prefix sum
}

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int Q = 1; 
    cin >> Q;
    for(int tc = 1; tc <= Q; ++tc) {
        S0LVE(tc);
        // S1LVE(tc);
        cout << endl;
    }
    return 0;
}
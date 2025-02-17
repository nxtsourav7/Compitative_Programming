/**
 *	author 	: nxtsourav7
 *	created : 2024-12-26 23:55:02
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
    string s;
    cin >> s;

    if(s[0] != '1' || s.back() == '9') {
        cout << "NO";
        return;
    }

    s.back() = 'x';
    s.find('0') != string::npos ? cout << "NO" : cout << "YES";
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
/**
 * author : nxtsourav7
 * created : 2025-01-04 19:17:08
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void S0LVE() {
    int a, b;
    cin >> a >> b;

    cout << (a + b) * (a + b) << '\n';
}

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    bool testCase = false;
    int Q = testCase ? (cin >> Q, Q) : 1;
    for(int tc = 1; tc <= Q; ++tc) S0LVE();
    return 0;
}
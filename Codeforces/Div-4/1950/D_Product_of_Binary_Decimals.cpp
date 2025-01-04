/**
 * author : nxtsourav7
 * created : 2025-01-03 15:26:10
**/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const int N = 1e5;
bool dp[N + 1];
int bin[32];

void binaryDecimal() {
    for(int i = 1; i <= 32; ++i) {
        int x = 0;
        for(int b = 5; b >= 0; --b) {
            x = x * 10 + ((i >> b) & 1);
        }
        bin[i - 1] = x;
    }
}

void createDP() {
    dp[1] = 1;
    for(auto i : bin) {
        for(int j = 1; i * j <= N; ++j) {
            dp[i * j] |= dp[j];
        }
    }
}

bool ok(int n) {
    if(n == 1) return true;

    bool ans = false;
    for(auto i : bin) {
        if(n % i == 0) ans |= ok(n / i); 
    }
    return ans;
}

void S0LVE() { // dp solution
    int n; cin >> n;
    cout << (dp[n] ? "YES\n" : "NO\n");
}

void S1LVE() { // brute force solution
    int n; cin >> n;

    for(int i = 31; i > 0; --i){
        while(n % bin[i] == 0) n /= bin[i];
    }
    cout << (n == 1 ? "YES\n" : "NO\n");
}

void S2LVE() { // recursive solution
    int n; cin >> n;
    cout << (ok(n) ? "YES\n" : "NO\n");
}

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);

    binaryDecimal();
    createDP();

    bool testCase = true;
    int Q = testCase ? (cin >> Q, Q) : 1;
    for(int tc = 1; tc <= Q; ++tc) S0LVE();
    return 0;
}
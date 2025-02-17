/**
 *	author 	: nxtsourav7
 *	created : 2024-12-25 03:41:28
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
    int n;
    cin >> n;

    queue<int> q;
    for(int i = 1; i <= n; ++i) {
        q.push(i);
    }

    bool flag = false;
    while(!q.empty()) {
        if(flag) {
            cout << q.front() << " ";
            q.pop();
        }
        else {
            q.push(q.front());
            q.pop();
        }
        flag = !flag;
    }
}

int32_t main() {
    fastIO;
    bool Q = false;
    int T = Q? (cin >> T, T) : 1;
    test(T) {
        solve();
        cout << endl;
    }
    
    return 0;
}
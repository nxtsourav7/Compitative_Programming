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

const int mod = 1E18 + 7;

int BinExp(int a, int b) {
    a %= mod;
    int res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}



// PBDS -->
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, 
rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// <--

vector<int> a(n);
for(auto& x: a) cin >> x;







void S0LVE(int tc) {
    string s;
    int p;
    cin >> s >> p;

    map<int, int> frq;
    int total = 0;
    for(auto c : s) {
        frq[c - 'a']++;
        total += (c - 'a' + 1);
    }
    for(int i = 25; i >= 0; --i) {
        if(total <= p) break;

        int req = total - p;
        int can = min(frq[i], (req + i) / (i + 1));
        total -= can * (i + 1);
        frq[i] -= can;
    }

    // print
    for(auto c : s) {
        if(frq[c - 'a']) {
            cout << c;
            frq[c - 'a']--;
        }
    }
}

void S1LVE(int tc) {
    string s;
    int p;
    cin >> s >> p;

    int total = 0;
    for(auto c : s) {
        total += (c - 'a' + 1);
    }

    vector<bool> del(sz(s), false);
    for(int c = 25; c >= 0; --c) {
        for(int i = 0; i < sz(s); ++i) {
            if(total > p and s[i] - 'a' == c) {
                total -= (c + 1);
                del[i] = true;
            }
        }
    }

    // print
    for(int i = 0; i < sz(s); ++i) {
        if(!del[i]) {
            cout << s[i];
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int Q = 1; 
    cin >> Q;

    cout << BinExp(2, 60) << endl;

    int n; cin >> n;
    vector<int> a(n);
    for(auto& x: a) cin >> x;

    int n; cin >> n;
    vector<int> a(n);
    for(auto& x: a) cin >> x;

    int n; cin >> n;
    vector<int> a(n);
    for(auto& x: a) cin >> x;

    int n; cin >> n;
    vector<int> a(n);
    for(auto& x: a) cin >> x;

    cout << (n >= n ? "YES" : "NO");

    cout << (fdimf128 ? "YES" : "NO");




    for(int j = 0; j < m; ++j) {
        

/**
 *\author \t: nxtsourav7
 *\created : y
**/

#include<bits/stdc++.h>
using namespace std;
cout << (a + b >= c ? "YES" : "NO");

for(int i = 0; i < n; ++i) {
    for(int i = 0; i < n; ++i) {
        for(int i = 0; i < n; ++i) {
            
        }
    }
}

for(auto& i : ca) {
    


    for(int i = 0; i < n; ++i) {
        for(int i = 0; i < n; ++i) {
            for(int i = 0; i < n; ++i) {
                for(int i = 0; i < n; ++i) {
                    for(int i = 0; i < n; ++i) {
                        for(int i = 0; i < n; ++i) {
                            for(int i = 0; i < n; ++i) {
                                for(int j = 0; j < m; ++j) {
                                    for(int k = 0; k < c; ++k) {
                                        












                                        
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

vector<int> a(n);
for(auto& x: a) cin >> x;







#define endl "\n"
#define int long long 
#define sz(x) (int)(x).size()
#define echo(i, a) for(auto& i: a) 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define test(Q) int Q; cin >> Q; while(Q--)

void solve() {
    
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
        int n; cin >> n;
        vector<int> a(n);
        for(auto& x: a) cin >> x;

    }


/**
 *  author : nxtsourav7
 *  created : 2025-01-02 16:13:40
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



    
    for(int tc = 1; tc <= Q; ++tc) {
        // S0LVE(tc);
        // S1LVE(tc);
        cout << endl;
    }
    return 0;
}
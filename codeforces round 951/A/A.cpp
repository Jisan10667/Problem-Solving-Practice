// Bismillahir Rahman-ir Rahim
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <random>
#include <chrono>

#define PI acos(-1)
#define F first
#define S second
#define debug(x) cout << '>' << #x << ":" << x << endl
#define tara ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define Y printf("YES\n")
#define N printf("NO\n")
#define ll long long
#define lll __int128
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<long, long>
#define eb emplace_back
#define pb push_back
#define sc scanf
#define pf printf
#define endl '\n'
#define INF 1 << 30
#define ll_INF 1LL << 62

const int MAX = 3e5 + 5;

using namespace std;

inline long long read() {
    long long x = 0, f = 1; 
    char ch = getchar();
    while (ch < '0' || ch > '9') { 
        if (ch == '-') f = -1; 
        ch = getchar(); 
    }
    while (ch >= '0' && ch <= '9') { 
        x = x * 10 + ch - 48; 
        ch = getchar(); 
    }
    return x * f;
}

bool isprime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int findprime(int n) {
    while (!isprime(n)) {
        n++;
    }
    return n;
}

ull getha(const vector<ll>& ha, const vector<ll>& p, int l, int r, int MOD) {
    if (l > r) return 0;
    return (ha[r] - (ha[l - 1] * p[r - l + 1] % MOD) + MOD) % MOD;
}

ull getrha(const vector<ll>& rha, const vector<ll>& p, int l, int r, int MOD) {
    return (rha[l] - ((rha[r + 1] * p[r - l + 1]) % MOD) + MOD) % MOD;
}

void solve() {
    int n = read(), k = read();
    string s; 
    cin >> s;
    vector<ll> ha(n + 1), rha(n + 1), p(n + 1);
    int h1 = 0, h2 = 0;

    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    const int MOD = findprime(rng() % 900000000 + 1000000000);
    
    for (int i = 1; i <= n; ++i) {
        ha[i] = (10LL * ha[i - 1] + s[i] - '0') % MOD;
    }
    for (int i = n; i >= 1; --i) {
        rha[i] = (10LL * rha[i + 1] + s[i] - '0') % MOD;
    }
    p[0] = 1;
    for (int i = 1; i <= n; ++i) {
        p[i] = 10LL * p[i - 1] % MOD;
    }
    
    for (int i = 0; i < n; ++i) {
        h1 = (h1 + 10LL * (i / k) + i % k) % MOD;
    }
    for (int i = 0; i < n; ++i) {
        h2 = (h2 + 10LL * ((i / k) + 1)) % MOD;
    }
    // debug(h1); debug(h2);

    for (int i = 1; i <= n; ++i) {
        ll h = (getha(ha, p, i, n, MOD) + p[i] % MOD) % MOD;
        // debug(i, h, getha(ha, p, i + 1, n, MOD), getrha(rha, p, 1, i, MOD) * p[i]);
        if (h == h1 || h == h2) {
            cout << i;
            return;
        }
    }
    cout << -1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    tara;

    int t, i, j;
    t = 1;

    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}

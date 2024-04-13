//Bismillahir Rahman-ir Rahim
#include<complex>
#include<queue>
#include<set>
#include<unordered_map>
#include<list>
#include<chrono>
#include<random>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<cstdio>
#include<cstring>
#include<string>
#include<stdlib.h>
#include<iomanip>

#define PI acos(-1)
#define F first
#define S second
#define debug(x)  cout<<'>'<<#x<<":"<<x<<endl
#define tara ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define Y printf("YES\n")
#define N printf("NO\n")
#define ll long long
#define lll __int128
#define ull unsigned long long
#define pii pair<int,int>
#define pll pair<long,long>
#define eb emplace_back
#define pb push_back
#define sc scanf
#define pf printf
#define endl '\n'
#define INF 1<<30
#define ll_INF 1LL<<62

 const int M=5005;
const int MOD = 998244353;
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

using namespace std;
ll ara[M], pref[M] ;


void solve() {
    ll n;
    std::cin >> n;
    for(ll i = 1; i <= n; i++) cin >> ara[i];
    sort(ara + 1, ara + n + 1);
    for(ll i=0 ; i<M ; i++)pref[i]=1 ;
    ll ans = 0;
    for(ll i = 1, x; i <= n; i++) {
        x = ara[i];
        for(ll j = 0; j <= x; j++) ans = (ans + (ll)pref[j] * x) % MOD;
        for(ll j = x + 1; j < M; j++) ans = (ans + (ll)pref[j] * ((j + x + 1) >> 1)) % MOD;


        for(ll j = M-1; j>=0;j-- ) if(j >= x) {
            pref[j] = (pref[j] + pref[j - x]) % MOD;
        }
    }
    printf("%lld\n", ans);
    
    

    

}

int main() {
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   
    int t=1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
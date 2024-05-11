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


// Function to calculate x^e % mod
long long modpow(long long x, long long e, long long mod) {
    long long result = 1;
    while (e > 0) {
        if (e % 2 == 1)
            result = (result * x) % mod;
        x = (x * x) % mod;
        e /= 2;
    }
    return result;
}

// Function to get the number of digits
int digits(long long num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}


void solve() {
    ll n, i, j, sum=0,mod=1e8, ans=0 ;

    cin>>n ;
    ll ara[n], totalsums=0; ;
    for(i=0 ; i<n ; i++){
        cin>>ara[i] ;
        sum+=(ara[i]*(n-1)) ;   
    }
    sort(ara,ara+n) ;

    for(i=0 ; i<n ; i++){
        int idx = lower_bound(ara + i + 1, ara + n, 100000000 - ara[i]) - ara;
        if(idx>=n)continue ;
        ans=ans+mod*(n-idx) ;
    }
    cout<<sum-ans<<endl ;
  

    

    

   

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
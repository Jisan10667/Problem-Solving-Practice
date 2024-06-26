//Bismillahir Rahman-ir Rahim
#include<complex>
#include<queue>
#include<set>
#include<unordered_set>
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
 
// const int M=1e5;
const int MAXN = 1000000;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

using namespace std ;

vector<int> f ;
vector<long long> prefix_sum(MAXN + 1, 0);

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void compute_f() {
    for (int x = 1; x <= MAXN; ++x) {
        for (int i = 1; i <= x; ++i) {
            if (gcd(i, x) == 1) {
                f[x] += i;
            }
        }
    }
}
void solve()
{  
    int L, R;
    cin >> L >> R;

    long long result = prefix_sum[R] - (L > 1 ? prefix_sum[L -1] : 0);
    cout << result << "\n";
   
}

int main(){
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
    
     tara ;
    compute_f();
    // Build prefix sum   of f
    for (int i = 1; i <= MAXN; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + f[i];
        //cout<<prefix_sum[i]<<endl;
    }

    int t;
    t = 1;
    
    cin >> t;

    for(int i=0; i<t; i++) {
        // if(i) printf("\n");
        // cout << "Case " << i+1 << ": ";
        solve();
    }
    return 0;
}
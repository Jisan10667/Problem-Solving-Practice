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
 
// const int M=1e5;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

using namespace std ;

const int MAXN = 1000;
vector<long long> f(MAXN + 1, 0);
vector<long long> prefix(MAXN + 1, 0);
 vector<int> totients ;

vector<int> calculateTotient(int n) {
    vector<int> phi(n + 1);
    // Initialize phi[i] with i
    for (int i = 0; i <= n; ++i) {
        phi[i] = i;
    }

    // Using a sieve-like approach to compute totient values
    for (int i = 2; i <= n; ++i) {
        if (phi[i] == i) { // i is a prime number
            for (int j = i; j <= n; j += i) {
                phi[j] -= phi[j] / i; // Decrease multiples of i by factor of (1 - 1/i)
            }
        }
    }

    return phi;
}
long long sumCoprimes(int n, const vector<int>& phi) {
    long long sum = 0;
    for (int i = 1; i < n; ++i) {
        if (gcd(n, i) == 1) {
            sum += i;
        }
    }
    return sum;
}

void solve() {
   int l, r ;
   cin>>l>>r ;

   cout<<prefix[r]-prefix[l-1]+(l==1?1:0)<<endl ;
}
int main(){
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
    
     //tara ;
   
    int t;
    t = 1;
    totients = calculateTotient(MAXN);
    prefix[0]=0 ;
    for (int i = 1; i <= MAXN; ++i) {
        long long sum = sumCoprimes(i, totients);
        //cout << "Sum of numbers coprime with " << i << " = " << sum << endl;
        prefix[i]=prefix[i-1]+sum ;
    }

    cin >> t;

    for(int i=0; i<t; i++) {
        // if(i) printf("\n");
        // cout << "Case " << i+1 << ": ";
        solve();
    }
    return 0;
}
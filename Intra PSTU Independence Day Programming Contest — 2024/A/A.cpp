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
 
const int M=1e6+5;
int phi[M];
ll result[M];

void computeTotient() {
    // Initialize phi for every number as the number itself
    for (int i = 1; i < M; i++) {
        phi[i] = i;
    }

    // Use the Sieve of Eratosthenes to find the totient of each number
    for (int p = 2; p < M; p++) {
        if (phi[p] == p) { // p is a prime
            phi[p] = p - 1;
            for (int i = 2*p; i < M; i += p) {
               phi[i] = (phi[i] / p) * (p - 1);
            }
        }
    }
}

void precomputeResults() {
    // Precompute the result for each number
    for (int i = 1; i < M; i++) {
        for (int j = i; j < M; j += i) {
            result[j] += (ll)i * phi[j/i];
        }
    }
    // Calculate prefix sums for the results
    for (int i = 2; i < M; i++) {
        result[i] += result[i - 1];
    }
}

void solve() {
    int L, R;
    cin >> L >> R;
    cout << result[R] - result[L - 1] << endl;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    

    computeTotient();
    precomputeResults();
   
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
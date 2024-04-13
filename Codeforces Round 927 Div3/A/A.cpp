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

// const int M=1e5;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

using namespace std;



void solve() {
   int n, i ;
   cin>>n ;
   string s ;
   cin>>s ;

   int  lim=n, cnt=0 ;

   for(i=0 ; i<n ; i++){
    if(s[i]=='*' && i+1<n && s[i+1]=='*'){
        lim=i+1 ; break ;
    }
   }

   for(i=0 ; i<lim ; i++){
    if(s[i]=='@')cnt++ ;
   }
   cout<<cnt<<endl ;



}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    tara;

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

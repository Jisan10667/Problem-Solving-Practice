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

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

using namespace std ;

void solve()
{
 int n, i, j, k, m ;
   cin>>n>>m>>k ;

   unordered_map<int,int>a,b ;

   int ara[n], bra[m] ;

   for(i=0 ; i<n ; i++){
      cin>>ara[i] ;
      a[ara[i]]++ ;
   }
   for(j=0 ; j<m ; j++){
      cin>>bra[j] ;
      b[bra[j]]++ ;
   }
   cout<<"hello"<<endl;

   int common=0, count_a=0, count_b=0, ans=0 ;

   for(i=1 ; i<=k ; i++){
      if(a[i] && b[i])common++ ;
      if(a[i])count_a++ ;
      else if(b[i])count_b++ ;
      else{
         ans=1;
         break ;
      }
   }
   

   if(count_a>k/2 || count_b>k/2)ans=1 ;
   else{
      int rem=k/2-count_a+k/2-count_b ;
      if(rem!=common)ans=1 ;
   }
   if(ans){
      N ;
      
   }
   else Y ;



}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 #endif
    
     tara ;
   
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
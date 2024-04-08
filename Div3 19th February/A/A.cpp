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
  ll n, i, j, m ;
  cin>>n>>m ;
  ll ara[n+1], suff[n+2], pref[n+1], prod=1 ;
  pref[0]=1 ;
  for(i=1 ; i<=n ; i++)cin>>ara[i], pref[i]=(pref[i-1]*ara[i]), prod*=ara[i] ;

  string s ;
  cin>>s ;  
  suff[n]=ara[n] ; 
  suff[n+1]=1 ;   
  for(i=n-1 ; i>=1 ; i--)suff[i]=(suff[i+1]*ara[i]) ; 

  int l=0, r=n+1, ans=1;
  
  cout<<prod%m<<" " ;  
  for(i=0 ; i<n ; i++){
    if(s[i]=='L')l++ ;
    else r-- ;
    if(r-l==1)break ;
    //cout<<l<<" "<<r<<" " ;
    ans=(prod/(suff[r]*pref[l])) ;
    cout<<ans%m<<" " ;
  }
  cout<<endl ;  
  
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
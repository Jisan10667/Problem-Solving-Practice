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
 
const int M=2e5+10;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

using namespace std ;


ll gcd(ll a, ll b){
   if(b==0)return a ;
   return gcd(b,a%b) ;
}
int n, m,ara[M],ans[M] ;
string s ;



int rec(int l,int r, int i){
   if(l==r)return ans[i]=ara[l]%m ;

   else if(s[i]=='L')return ans[i]=(rec(l+1,r,i+1)*ara[l])%m ;

   else return ans[i]=(rec(l,r-1,i+1)*ara[r])%m ;
}



void solve()
{  
   cin>>n>>m ;

   for(int i=0 ; i<n ; i++)cin>>ara[i] ;

   cin>>s  ;
   
   rec(0,n-1,0) ;

   for(int i=0 ; i<n ; i++)cout<<ans[i]<<" " ;
      cout<<endl ;

}

int main(){
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
    
    // tara ;
   
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
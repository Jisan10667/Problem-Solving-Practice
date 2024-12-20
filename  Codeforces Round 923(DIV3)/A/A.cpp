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



void solve(){
    cout<<"h" ;
   int n, m;
   cin>>n>>m ;
   
   vector<int>adj[n+1] ;
   int par[n+1], dis[n+1] ;
   
   for(int i=1 ; i<=n ; i++)dis[i]=INT_MAX ;
   for(int i=0 ; i<m ; i++){
    int x, y ;
    cin>>x>>y ;
    adj[x].push_back(y) ;
    adj[y].push_back(x) ;
   }
   
   
   queue<int>q ;
   q.push(1) ;
   par[1]=-1 ;
   while(!q.empty()){
    int from=q.front() ;
    q.pop() ;
    
    for(int to:adj[from]){
        if(dis[to]>dis[from]+1){
            dis[to]=dis[from]+1 ;
            par[to]=from ;
            q.push(to) ;
        }
    }
   }
   
   if(dis[n]==INT_MAX)pf("IMPOSSIBLE\n") ;
   else{
    cout<<dis[n]+1<<endl ;
    vector<int>path ;
    while(par[n]!=-1){
        path.push_back(n) ;
        n=par[n] ;
    }
    reverse(path.begin(),path.end()) ;
    for(int p:path)cout<<p<<" " ;
    cout<<endl ;
   }
   


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
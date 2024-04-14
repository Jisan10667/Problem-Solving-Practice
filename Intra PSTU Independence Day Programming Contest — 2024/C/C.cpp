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

ll ara[M], bra[M], point[M], dp[M] ;
ll a, b, x, n, i, j ;

void solve()
{ 
    

    cin>>n ;
    
    
    for(i=0 ; i<n ; i++){
        cin>>ara[i]>>bra[i]>>point[i] ;
    }
    
    vector<ll>dis(n+1, ll_INF) ;
    

    dis[1]=0 ;

    vector<vector<pair<ll,ll> > >g(n+1) ;


    for(i=0 ; i<n ; i++){
        g[i].push_back({i+1,ara[i]});
        g[i].push_back({point[i],bra[i]});
    }

    priority_queue<pair<int,int> >pq ;

    pq.push({0,0}) ;


    while(!pq.empty()){
        int val=-pq.top().F ;
        int idx=pq.top().S ;
        pq.pop() ;


        for(auto lol:g[idx]){
            int curIndex=lol.F, curVal=lol.S ;
            if(dis[curIndex]>val+curVal){
                dis[curIndex]=curVal+val ;
                pq.push({-dis[curIndex],curIndex}) ;
            }
        }

    }
    cout<<dis[n]<<endl ;    
} 
  

int main(){
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
    
     tara ;
   
    int t;
    t = 1;
    
    //cin >> t;

    for(int i=0; i<t; i++) {
        // if(i) printf("\n");
        // cout << "Case " << i+1 << ": ";
        solve();
    }
    return 0;
}
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
 
const int M=2e5;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

using namespace std ;


int tree[4*M+5][2];
map<int, vector<int> > lst;
int ara[M] ;

void build(int idx, int l, int r){
   if(l==r){
      tree[idx][0]=tree[idx][1]=ara[l] ;
      return ;
   }

   int mid=(l+r)>>2 ;

   build(idx*2,l,mid) ;
   build(idx*2,mid+1,r) ;

   tree[idx][0]=min(tree[idx*2][0],tree[idx*2+1][0]) ;
   tree[idx][1]=max(tree[idx*2][1],tree[idx*2+1][1]) ;
}

pair<int,int> query(int idx,int l, int r,int L, int R){
   if(r<R || l<L)return {INF,0} ;
   if(l>=L && r<=R)return {tree[idx][0],tree[idx][1]};
   int mid=(l+r)>>2 ;
   pair<int, int> x = query(idx*2, l, mid, L, R);
   pair<int, int> y = query(idx*2+1, mid+1, r, L, R);

   return {min(x.first, y.first), max(x.second, y.second)};
}

void solve()
{  
   int n, i ,j ;
   cin>>n ;
   lst.clear() ;

   for(i=1 ; i<=n ; i++){
      cin>>ara[i] ;
      lst[ara[i]].push_back(i) ;
   }

   build(1,1,n) ;

   int q  ;
   cin>>q ;
   while(q--){
      int l, r ;
      cin>>l>>r ;
      pair<int,int>x = query(1, 1, n, l, r); 

      if(x.F==x.S)cout<<"-1 -1\n" ;

      else{
         auto it = lower_bound(lst[x.first].begin(), lst[x.first].end(), l);
            cout << *it << ' ' ;
            auto it2 = lower_bound(lst[x.second].begin(), lst[x.second].end(), l);
            cout << *it2 << '\n' ;
      }
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
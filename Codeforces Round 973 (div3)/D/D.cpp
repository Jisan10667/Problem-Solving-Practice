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
  

   int i, j, n ;

   cin>>n ;
   vector<pair<int,int> > ski(n),movie(n),bored(n);

   for(i=0 ; i<3 ; i++){
      for(j=0 ; j<n ; j++){
         int x ;
         cin>>x ;

         if(i==0)ski[j]={x,j+1} ;
         if(i==1)movie[j]={x,j+1} ;
         if(i==2)bored[j]={x,j+1} ;
      }
   }

   sort(ski.begin(),ski.end()) ;
   sort(movie.begin(),movie.end()) ;
   sort(bored.begin(),bored.end()) ;
   int maxi=-1 ;
   for(i=0 ; i<3 ; i++){
      int sk=-1,mov=-1,bor=-1, sum=0 ;

      for(int skj=0 ; skj<3 ; skj++){
         sk=ski[skj].S ;
         for(int movj=0 ; movj<3 ; movj++){
            mov=movie[movj].S ;
            if(mov==sk)continue ;

            for(int borj=0 ; borj<3 ; borj++){
               bor=bored[borj].S ;
               if(sk==bor)continue ;
               if(mov==bor)continue ;

               // cout<<sk<<" "<<mov<<" "<<bor<<endl ;
               sum=ski[sk-1].F+movie[mov-1].F+bored[bor-1].F ;
               maxi=max(maxi,sum) ;
               // cout<<maxi<<endl ;

            }
         }

      }
   } 
   cout<<maxi<<endl ;  

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
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
#include<unordered_map>
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
 
const int MAX=3e5+5;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

using namespace std ;
 
#include <iostream>
#include <vector>

using namespace std;

int power(int x, int y){
    int res=1 ;

    for(int i=1 ; i<=y ; i++)res*=x ;
    return res ;
}

void solve()
{   
   int n, i, j ;
   cin>>n ;
   int ara[n] ;
   int odd=0, even=0, cnt1=0 ;

   for(i=0 ; i<n ; i++){
    cin>>ara[i] ;
    if(ara[i]%2)odd++ ;
    else even++ ;
    if(ara[i]==1)cnt1++ ;
   }
   if(cnt1==1)Y ;
   else if(cnt1>1)N ;
   else if(!odd)Y ;
   else{
     int i=n-1 ;
     sort(ara,ara+n) ;
     while(ara[i]%ara[0] ==0)i-- ;
     if(i<0)N ;
     else Y ;
   }
   

}


int main(){
#ifndef ONLINE_JUDGE
   freopen("input1.txt", "r", stdin);
   freopen("output1.txt", "w", stdout);
#endif
    
    tara ;
   
    int t, i, j;
    t=1 ;
    
    cin >> t;

    for(int i=0; i<t; i++) {
        // if(i) printf("\n");
        // cout << "Case " << i+1 << ": ";
        solve();
    }
    return 0;
}
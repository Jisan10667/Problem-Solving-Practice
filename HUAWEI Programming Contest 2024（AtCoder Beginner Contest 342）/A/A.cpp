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
  unordered_map<char,char>mp ; 
  map<pair<char,char>,int> freq ;   
  for(char i='a' ; i<='z' ; i++)mp[i]=i ;

  int n, q, i ;
  cin>>n ;
  string s ;
  cin>>s ;
  cin>>q ;
  while(q--){
    char a, b ;
    cin>>a>>b ;
    if(freq[{b,a}]){
        freq[{b,a}]=0 ;
        freq[{a,b}]=1 ;
        mp[a]=b ;
        mp[b]=b ;
    }
    else {
        freq[{a,b}]=1 ;
        mp[a]=b ;
    }
  }

  //for(i='a' ; i<='z' ; i++)cout<<char(i)<<" "<<mp[i]<<endl;

  for(char x:s)cout<<mp[x] ;
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
    
    //cin >> t;

    for(int i=0; i<t; i++) {
        // if(i) printf("\n");
        // cout << "Case " << i+1 << ": ";
        solve();
    }
    return 0;
}
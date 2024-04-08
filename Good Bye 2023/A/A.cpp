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

map<int,int>mp ;
int dp[16] ;
int solve(vector<int>& coins,int amount){
        if(amount==0)return 0 ;
        if(amount<0)return INT_MAX ;
        if(dp[amount]!=-1)return dp[amount] ;

        int n=coins.size(), cnt=INT_MAX ;
        for(int i=0 ; i<n ; i++){
            int ans=solve(coins,amount-coins[i]) ;
            if(ans!=INT_MAX)cnt=min(ans+1,cnt) ; 
        }

        dp[amount]=cnt ;
        mp[amount]=cnt ;
        return dp[amount] ;
    }


void solve()
{ 
   
  
  
  
    
  int n ;
  cin>>n ;
  dp[0]=0 ; 
  //for(int i=0 ; i<=15 ; i++)cout<<dp[i]<<endl;
   
  int count=dp[n%15] ;

  if(n>15)count+=n/15 ;
  cout<<count<<endl;
  

  

  
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

    vector<int> coins = {1, 3, 6, 10, 15};
  int coinArray[5]; // Ensure the array size matches the number of elements in the vector
    for(int i = 0; i < 5; ++i) {
        coinArray[i] = coins[i];
    }


    int amount=15 ;
    
    memset(dp,-1,sizeof(dp)) ;
    int res=solve(coins,amount) ;

    for(int i=0; i<t; i++) {
        // if(i) printf("\n");
        // cout << "Case " << i+1 << ": ";
        solve();
    }
    return 0;
}
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
    int n, i, j ;
    string s ;
    cin>>n ;
    cin>>s ;
    int ans=0 ;

    int zero[n], one[n] ;

    for(i=0 ; i<n ; i++){
        zero[i]=0 ;
        one[i]=0 ;
    }
    int cnt0=0, cnt1=0 ;
    for(i=0 ; i<n ; i++){
        if(s[i]=='0')cnt0++ ;
        else cnt1++ ;
        zero[i]=cnt0 ;
        one[i]=cnt1 ;
    }
    ans=0 ;
    for (int i = 0; i < n; i++){
        for (int len = 1; len <= n - i; len++){
            string ss= s.substr(i, len) ;
             cout<<ss<<endl ;
             //cout<<i<<" "<<len<<endl;
              cnt0=zero[i+len-1] ;
              cnt1=one[i+len-1] ;
             
             if(i-1>=0)cnt0-=zero[i-1], cnt1-= one[i-1];

             cout<<cnt0<<" "<<cnt1<<endl<<endl ; 

            if(cnt1>=cnt0)ans+=cnt1 ;
            
        }
    }
    cout<<ans<<endl;


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
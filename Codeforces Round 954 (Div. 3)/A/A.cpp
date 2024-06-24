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

void solve() {
        int s, n; 
         cin >> s >> n; 
 
        string ss, ans; 
        cin >> ss; 
        ans=ss ;
        vector<int> indices(n); 
        for (int &index : indices) { 
            cin >> index; 
        } 
 
        string sss; 
        cin >> sss; 
 
         
        set<int> uniq; 
        for(int x:indices)uniq.insert(x) ;

        vector<int> sorted;

        for(int x:uniq)sorted.pb(x) ; 
        sort(sorted.begin(), sorted.end()); 
 
       
        sort(sss.begin(), sss.end()); 
 
        
        unordered_map<int, char> mp; 
        for (int i = 0; i < sorted.size(); i++) { 
            mp[sorted[i]] = sss[i]; 
        } 
 
        
        for (auto lol : mp) { 
            ans[lol.F - 1] = lol.S; 
        } 
 
        
        cout << ans << endl; 

    
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
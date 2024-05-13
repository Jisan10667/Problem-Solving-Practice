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

int maxScore(const vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> max_future_value(m, vector<int>(n));

    max_future_value[m-1][n-1] = grid[m-1][n-1];


    for (int j = n-2; j >= 0; j--) {
        max_future_value[m-1][j] = max(max_future_value[m-1][j+1], grid[m-1][j]);
    }

    
    for (int i = m-2; i >= 0; i--) {
        max_future_value[i][n-1] = max(max_future_value[i+1][n-1], grid[i][n-1]);
    }

    for (int i = m-2; i >= 0; i--) {
        for (int j = n-2; j >= 0; j--) {
            max_future_value[i][j] = max(max(max_future_value[i+1][j], max_future_value[i][j+1]), grid[i][j]);
        }
    }

    int max_score = -9999999 ;

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i < m-1) {
                max_score = max(max_score, max_future_value[i+1][j] - grid[i][j]);
            }
            if (j < n-1) {
                max_score = max(max_score, max_future_value[i][j+1] - grid[i][j]);
            }
        }
    }

    return max_score;
}





void solve()
{ 
   
    vector<vector<int>> grid1 = {{9,5,7,3},{8,9,6,1},{6,7,14,3},{2,5,3,1}};
      cout << "Maximum score for example 1: " << maxScore(grid1) << endl;
    vector<vector<int>> grid2 = {{4,3,2},{3,2,1}};
    cout << "Maximum score for example 2: " << maxScore(grid2) << endl;


  
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
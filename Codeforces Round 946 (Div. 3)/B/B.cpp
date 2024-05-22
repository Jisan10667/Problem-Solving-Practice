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

bool solveSingleTestCase(int n, const string& s, string& result) {
    set<pair<int, int>> current, next;
    current.insert({0, 0});
    
    for (int i = 0; i < n; ++i) {
        next.clear();
        for (const auto& p : current) {
            int x = p.first, y = p.second;
            if (s[i] == 'N') {
                next.insert({x, y+1});
                next.insert({x, y-1});
            } else if (s[i] == 'S') {
                next.insert({x, y-1});
                next.insert({x, y+1});
            } else if (s[i] == 'E') {
                next.insert({x+1, y});
                next.insert({x-1, y});
            } else if (s[i] == 'W') {
                next.insert({x-1, y});
                next.insert({x+1, y});
            }
        }
        current.swap(next);
    }

    for (const auto& p : current) {
        if (p.first == 0 && p.second == 0) {
            return true;
        }
    }

    return false;
}


void solve(){ 
  int n;
        cin >> n;
        string s;
        cin >> s;

        string result(n, 'R');
        if (solveSingleTestCase(n, s, result)) {
            cout << result << endl;
        } else {
            cout << "NO" << endl;
        }
  


}

int main(){
    #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
   
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
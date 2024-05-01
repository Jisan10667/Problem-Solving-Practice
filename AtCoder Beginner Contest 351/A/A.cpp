//Bismillahir Rahman-ir Rahim
#include<complex>
#include<queue>
#include<set>
#include<unordered_map>
#include<list>
#include<chrono>
#include<random>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include <stack>
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

 const int M=5005;
const int MOD = 998244353;
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

using namespace std;

// Grid dimensions, grid data, and visitation status
int H, W;
vector<string> grid;
vector<vector<bool>> restricted;
vector<vector<bool>> visited;

int dfs(int r, int c) {
    visited[r][c] = true;
    int count = 1; // Each cell counts as 1

    for (int d = 0; d < 4; ++d) {
        int nr = r + dx[d];
        int nc = c + dy[d];
        if (nr >= 0 && nr < H && nc >= 0 && nc < W) {
            if (!visited[nr][nc] && grid[nr][nc] == '.' && !restricted[nr][nc]) {
                
                cout<<"nr "<<nr+1<<" "<<nc+1<<endl ;
                count += dfs(nr, nc); // Accumulate counts from all reachable cells
            }
        }
    }
    return count;
}


void solve() {
     cin >> H >> W;
    grid.resize(H);
    restricted.assign(H, vector<bool>(W, false));
    visited.assign(H, vector<bool>(W, false));

    for (int i = 0; i < H; ++i) {
        cin >> grid[i];
    }

    // Mark cells adjacent to magnets as restricted
    for (int r = 0; r < H; ++r) {
        for (int c = 0; c < W; ++c) {
            if (grid[r][c] == '#') {
                for (int d = 0; d < 4; ++d) {
                    int nr = r + dx[d];
                    int nc = c + dy[d];
                    if (nr >= 0 && nr < H && nc >= 0 && nc < W) {
                        restricted[nr][nc] = true;
                    }
                }
            }
        }
    }

    int max_degree_of_freedom = 0;
    for (int r = 0; r < H; ++r) {
        for (int c = 0; c < W; ++c) {
            if (grid[r][c] == '.' && !restricted[r][c]) {
                cout<<r+1<<" "<<c+1<<endl<<endl ;
                int current_freedom = dfs(r, c);
                for(int r=0 ; r<H ; r++){
                    for (int c = 0; c < W; ++c) {
                        visited[r][c]=false ;
                    }
                }

                
                max_degree_of_freedom = max(max_degree_of_freedom, current_freedom);
            }
        }
    }

    cout << max_degree_of_freedom << endl;
    
}

int main() {
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   
    int t=1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
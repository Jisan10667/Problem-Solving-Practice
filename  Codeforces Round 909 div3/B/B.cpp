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
        string s;
        long long x;
        cin >> s >> x;

        int n = s.size();
        vector<int> w_pos, o_pos;

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'w') w_pos.push_back(i);
            else if (s[i] == 'o') o_pos.push_back(i);
        }

        if (w_pos.size() < 2 || o_pos.size() == 0) {
            cout << "-1\n";
            return;
        }

        auto count_wow = [&](int l, int r) -> long long {
            int w_b = 0, w_a = 0;
            long long cnt = 0;
            for (int i = 0; i < o_pos.size(); ++i) {
                if (o_pos[i] < l || o_pos[i] > r) continue;
                w_b = w_a = 0;
                for (int j = 0; j < w_pos.size(); ++j) {
                    if (w_pos[j] < o_pos[i] && w_pos[j] >= l) w_b++;
                    if (w_pos[j] > o_pos[i] && w_pos[j] <= r) w_a++;
                }
                cnt += (long long)w_b * w_a;
            }
            return cnt;
        };

        int best_l = -1, best_r = -1;
        int l = 0, r = 0;
        while (r < n) {
            long long cnt = count_wow(l, r);
            if (cnt == x) {
                int ext_r = r;
                while (ext_r + 1 < n && count_wow(l, ext_r + 1) == x) {
                    ext_r++;
                }
                if (best_l == -1 || ext_r - l > best_r - best_l) {
                    best_l = l;
                    best_r = ext_r;
                }
                l++;
            } else if (cnt < x) {
                r++;
            } else {
                l++;
            }
        }

        if (best_l == -1) {
            cout << "-1\n";
        } else {
            cout << best_l + 1 << " " << best_r + 1 << "\n";
        }
    

}

int main(){
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
    
    // tara ;
   
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
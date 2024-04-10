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

using namespace std;

bool canMakeAllOnes(const string& s, int k) {
    int len=s.length(), i, j ;

    for(i=0 ; i<len ; i++){
        if(s[i]=='1'){
            int ses=i+k, suru=i, zero=-1 ;
            if(i+k<)
            while(suru<ses){
                if(s[suru]=='1')s[suru]='0' ;
                else {
                    s[suru]='1' ;
                    if(zero==-1)zero=suru ;
                }
                suru++ ;
            }
            if(zero==-1)i=ses-1 ;
            else i=zero-1 ;
        }
    }

}

void solve() {
   int n;
    string s;
    cin >> n >> s;

    int left = 1, right = n, ans = 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(canMakeAllOnes(s, mid)) {
            ans = mid; // Found a viable k
            left = mid + 1; // Try for a larger k
        } else {
            right = mid - 1; // Reduce k
        }
    }

    cout << ans << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    tara;

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

//Bismillahir Rahman-ir Rahim
#include<complex>
#include<queue>
#include<set>
#include<map>
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
 
using namespace std;

vbool check_substrings(const string& a, int k, int m) {
    int cnt = 0;
    int i = 0;
    while (i < a.length() && cnt < k) {
        int i1 = i, ind = 0;
        while (i1 < a.length() && ind < m && a[ind] == a[i1]) {
            ind++;
            i1++;
        }
        if (ind == m) {
            cnt++;
            i = max(i1 - 1, i);
        }
        i++;
    }
    return cnt >= k;
}
void solve(){
   int n, k;
    cin >> n >> k;
    string a;
    cin >> a;

    int l = 0, r = (n + k - 1) / k + 1;

    while (r - l > 1) {
        int m = (r + l) / 2;
        if (m * k > n) {
            r = m;
            continue;
        }
        if (check_substrings(a, k, m)) {
            l = m;
        } else {
            r = m;
        }
    }

    cout << l << endl;
}
int main(){
    #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
    
    // tara ;
    ll t,n,x1,y1,x2,y2;
    cin>>t;
     while(t--){
       solve();
     }
}
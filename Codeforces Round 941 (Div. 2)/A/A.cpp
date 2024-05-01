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



void solve() {
   int a;
        cin >> a;
        vector<int> arr(a);
        unordered_map<int, int> mp;

        for (int i = 0; i < a; ++i) {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        sort(arr.begin(), arr.end());
        int prev = 0;
        int i = 0;

        for (i = 0; i < a; ++i) {
            if (arr[i] - prev > 1) {
                break;
            }
            prev = arr[i];
        }
        if(i==a){
            if (mp.size() % 2 == 0) 
            cout << "Bob" << endl;
            else cout << "Alice" << endl;
        }
         else if (a == 1 || i % 2 == 0 || mp.size() == 1) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }


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

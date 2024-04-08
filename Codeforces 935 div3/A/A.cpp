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





    
    int main() {
        #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;

        // Precompute the prefix sums of 0's and 1's
        vector<int> prefZero(n + 1, 0), prefOne(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefZero[i + 1] = prefZero[i] + (a[i] == '0');
            prefOne[i + 1] = prefOne[i] + (a[i] == '1');
        }

        // Check each position for the optimal placement of the road
        int bestPosition = 0;
        int minAbsDifference = INT_MAX;
        for (int i = 0; i <= n; ++i) {
            int leftZeros = prefZero[i];
            int rightOnes = prefOne[n] - prefOne[i];
            int leftSatisfied = leftZeros >= (i + 1) / 2;
            int rightSatisfied = rightOnes >= (n - i ) / 2;

            // If both sides are satisfied, check if this position is closer to the middle
            if (leftSatisfied && rightSatisfied) {
                int absDifference = abs(n / 2 - i);
                if (absDifference < minAbsDifference) {
                    minAbsDifference = absDifference;
                    bestPosition = i;
                }
                // Break the tie by choosing the smaller i (closer to the start)
                else if (absDifference == minAbsDifference) {
                    bestPosition = min(bestPosition, i);
                }
            }
        }

        cout << bestPosition << '\n';
    }
    return 0;
}
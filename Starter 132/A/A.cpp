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

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long countEvenSubarrays(vector<int>& arr) {
    int n = arr.size();
    vector<long long> endsAt(n, 0);  // Ends at each position
    long long count = 0;
    bool hasEven = false;

    // First pass: count subarrays with at least one even without any flip
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            hasEven = true;
            endsAt[i] = (i > 0 ? endsAt[i - 1] : 0) + 1;
        } else {
            endsAt[i] = (i > 0 ? endsAt[i - 1] : 0);
        }
        count += endsAt[i];
    }

    if (!hasEven) {
        return 0; // No even number, no valid subarrays without flip
    }

    long long maxCount = count;  // Start with the count of subarrays having at least one even

    // Consider flipping each odd number once
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {  // It's odd, consider flipping it
            // Temporarily treat arr[i] as even and recalculate endsAt
            vector<long long> newEndsAt(n, 0);
            long long newCount = 0;
            for (int j = 0; j < n; ++j) {
                if (j == i || arr[j] % 2 == 0) { // Either flipped or already even
                    newEndsAt[j] = (j > 0 ? newEndsAt[j - 1] : 0) + 1;
                } else {
                    newEndsAt[j] = (j > 0 ? newEndsAt[j - 1] : 0);
                }
                newCount += newEndsAt[j];
            }
            maxCount = max(maxCount, newCount);
        }
    }

    return maxCount+1;
}

void solve()
{ 
    int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        cout << countEvenSubarrays(A) << '\n';


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
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



vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
    int n = nums.size();

    vector<int> sameParityIndex(n, 0);
    
    for (int i = 1; i < n; ++i) {
        if ((nums[i] % 2) == (nums[i - 1] % 2)) {
            sameParityIndex[i] = 1;
        }
    }
    
    std::vector<int> prefixSum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + sameParityIndex[i - 1];
    }
    
    vector<bool> result;
    result.reserve(queries.size());

    for (const auto& query : queries) {
        int from = query[0];
        int to = query[1];
    
        if (prefixSum[to + 1] - prefixSum[from + 1] > 0) {
            result.push_back(false);
        } else {
            result.push_back(true);
        }
    }
    
    return result; 
}


void solve()
{ 
   int n ;
   cin>>n ;
   vector<int> nums ;

   for(int i=0 ; i<n ; i++){
    int x ;
    cin>>x ;
    nums.pb(x) ;

   }
   cout<<isArraySpecial(nums)<<endl;
 


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
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
#include<unordered_map>
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
 
const int MAX=3e5+5;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

using namespace std ;
 
#include <iostream>
#include <vector>

using namespace std;

class SegmentTree {
private:
    vector<int> tree;
    int n;

    void build(const vector<int>& nums, int node, int start, int end) {
        if (start == end) {
            tree[node] = nums[start];
        } else {
            int mid = (start + end) / 2;
            build(nums, 2 * node, start, mid);
            build(nums, 2 * node + 1, mid + 1, end);
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }

    int query(int node, int start, int end, int l, int r) {
        if (r < start || l > end) {
            return 0;
        }
        if (l <= start && r >= end) {
            return tree[node];
        }
        int mid = (start + end) / 2;
        return query(2 * node, start, mid, l, r) +
               query(2 * node + 1, mid + 1, end, l, r);
    }

public:
    SegmentTree(const vector<int>& nums) {
        n = nums.size();
        tree.resize(4 * n);
        build(nums, 1, 0, n - 1);
    }

    int sumRange(int l, int r) {
        return query(1, 0, n - 1, l, r);
    }
};

// int main() {
//     vector<int> nums = {1, 3, 5, 7, 9, 11};
//     SegmentTree st(nums);
//     cout << "Sum of segment [2, 4]: " << st.sumRange(2, 4) << endl;

//     return 0;
// }


void solve()
{   
   int n, i, j, q ;
   cin>>n>>q ;

   vector<int> ara  ;

   for(i=0 ; i<n ; i++){
        int x;
        cin>>x ;
        ara.push_back(x) ;  
   }



   SegmentTree st(ara);

   while(q--){
    int l, r ;
    cin>>l>>r ;

    int x=st.sumRange(l-1, r-1);
    //cout<<x<<" " ;

    int sum=0, range=r-l+1 ;
    if(range==1){
        N;continue ;
    } 
    else {
        sum=range+range/2 ;
    }

    if(sum>=x)N ;
    else Y ;   
   }



}


int main(){
#ifndef ONLINE_JUDGE
   freopen("input1.txt", "r", stdin);
   freopen("output1.txt", "w", stdout);
#endif
    
    tara ;
   
    int t, i, j;
    t=1 ;
    
    cin >> t;

    for(int i=0; i<t; i++) {
        // if(i) printf("\n");
        // cout << "Case " << i+1 << ": ";
        solve();
    }
    return 0;
}
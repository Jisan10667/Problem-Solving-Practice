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
 
const int M=2e5+10;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

using namespace std ;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


int maxDepth(TreeNode *root){
   if(root==nullptr)return 0 ;
   int left=maxDepth(root->left) ;
   int right=maxDepth(root->right) ;
   return max(left,right)+1 ;

}
void solve()
{  
   TreeNode *root=new TreeNode(3) ;
   root->left=new TreeNode(9) ;
   root->right=new TreeNode(20) ;
   root->right->left=new TreeNode(15) ;
   root->right->right=new TreeNode(7) ;
   
   cout<<maxDepth(root)<<endl ;

}

int main(){
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
    
    // tara ;
   
    int t;
    t = 1;
    
    //cin >> t;

    for(int i=0; i<t; i++) {
        // if(i) printf("\n");
        // cout << "Case " << i+1 << ": ";
        solve();
    }
    return 0;
}
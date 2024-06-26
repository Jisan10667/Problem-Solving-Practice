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

struct TreeNode{
   int val ;
   TreeNode* left ;
   TreeNode* right ;
   TreeNode(int x):val(x),left(NULL),right(NULL){}
};

void inorder(TreeNode* root){
   if(root!=NULL){
      inorder(root->left) ;
      cout<<root->val<<" " ;
      inorder(root->right) ;
   }
}

void preorder(TreeNode* root){
   if(root!=NULL){
       cout<<root->val<<" " ;
      preorder(root->left) ;
      preorder(root->right) ;
   }
}

void postorder(TreeNode* root){
   if(root!=NULL){
      postorder(root->left) ;
      postorder(root->right) ;
      cout<<root->val<<" " ;
   }
}

TreeNode* insertLevelOrder(vector<int>& nodes,TreeNode* root, int idx, int len){
   if(idx<len){
      TreeNode* tmp=new TreeNode(nodes[idx]) ;
      root=tmp ;
      root->left=insertLevelOrder(nodes,root->left, idx*2+1, len);
      root->right=insertLevelOrder(nodes,root->right, idx*2+2, len);
   }
   return root ;
}

void solve()
{  
    vector<int> nodes = {1, 2, 3, 4, 5, 6, 7};
    TreeNode* root=insertLevelOrder(nodes,root,0,nodes.size()) ;

    cout<<"inorder Traversal: ";
    inorder(root) ;
    cout<<endl ; 


    cout<<"preorder Traversal: ";
    preorder(root) ;
    cout<<endl ; 

     cout<<"postorder Traversal: ";
    postorder(root) ;
    cout<<endl ; 


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
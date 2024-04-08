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
// #define N printf("NO\n")
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
 
const int M=2e5+5;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

using namespace std ;


vector<int> A;
vector<Node> segTree;

struct Node {
    int maxVal;
    int secondMaxVal;
    int countSecondMax;
};

vector<Node> segTree;
vector<int> A;

Node merge(const Node& left, const Node& right) {
    Node parent;
    // Find the largest and second largest among left and right nodes
    // Also, count occurrences of the second largest value
    // This part needs to carefully handle several cases
    // Pseudocode:
    // parent.maxVal = max(left.maxVal, right.maxVal)
    // Determine parent.secondMaxVal and parent.countSecondMax
    // based on comparisons between left and right values
    return parent;
}

void build(int idx, int left, int right) {
    if (left == right) {
        segTree[idx] = {A[left], -1, 0}; // Initialize leaf node
    } else {
        int mid = (left + right) / 2;
        build(idx*2, left, mid);
        build(idx*2+1, mid+1, right);
        segTree[idx] = merge(segTree[idx*2], segTree[idx*2+1]);
    }
}

void update(int idx, int left, int right, int pos, int newVal) {
    if (left == right) {
        segTree[idx] = {newVal, -1, 0}; // Update leaf node
    } else {
        int mid = (left + right) / 2;
        if (pos <= mid) {
            update(idx*2, left, mid, pos, newVal);
        } else {
            update(idx*2+1, mid+1, right, pos, newVal);
        }
        segTree[idx] = merge(segTree[idx*2], segTree[idx*2+1]);
    }
}

Node query(int idx, int left, int right, int qLeft, int qRight) {
    if (qRight < left || right < qLeft) {
        return {-1, -1, 0}; // Return a dummy node for irrelevant segments
    }
    if (qLeft <= left && right <= qRight) {
        return segTree[idx];
    }
    int mid = (left + right) / 2;
    Node lQuery = query(idx*2, left, mid, qLeft, qRight);
    Node rQuery = query(idx*2+1, mid+1, right, qLeft, qRight);
    return merge(lQuery, rQuery);
}



void solve()
{   
    ll N, T;
    cin >> N >> T;

    unordered_map<ll, ll> playerScores; 
    unordered_map<ll, ll> scoreFrequency; 

    
    for (ll i = 1; i <= N; ++i) {
        playerScores[i] = 0;
        scoreFrequency[0]++;
    }

    for (ll i = 0; i < T; ++i) {
        ll A, B;
        cin >> A >> B;

      
        --scoreFrequency[playerScores[A]];
        if (scoreFrequency[playerScores[A]] == 0) {
            scoreFrequency.erase(playerScores[A]);
        }

        
        playerScores[A] += B;

        
        ++scoreFrequency[playerScores[A]];

        
        cout << scoreFrequency.size() << endl;
    }

    

}


int main(){
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
    
    //tara ;
   
    int t, i, j;
    t=1 ;
    
    //cin >> t;

    for(int i=0; i<t; i++) {
        // if(i) printf("\n");
        // cout << "Case " << i+1 << ": ";
        solve();
    }
    return 0;
}
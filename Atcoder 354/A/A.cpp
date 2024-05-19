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

struct Card {
    int index;
    int strength;
    int cost;
    int dis;
};

bool compareByStrength(const Card &a, const Card &b) {
    return a.dis < b.dis;
}


void solve()
{   
      int N;
    cin >> N;
    vector<Card> cards(N);
    
    for (int i = 0; i < N; ++i) {
        cards[i].index = i + 1;
        cin >> cards[i].strength >> cards[i].cost;
        cards[i].dis=cards[i].strength-cards[i].cost ;
    }
    
    sort(cards.begin(), cards.end(), compareByStrength);
    
    for(auto lol:cards){
        cout<<lol.strength<<" "<<lol.cost<<endl;
    }
    int i=0, j=N-1 ;
    vector<int>res ;
    unordered_map<int,int>mp ;
    cout<<endl ;
    while(i<j){
        if(cards[i].strength<cards[j].strength && cards[i].cost>cards[j].cost){
            mp[cards[i].index]++ ;
            i++ ;
        }
        else j--;
        cout<<i<<" "<<j<<endl;
    }
    
    cout<<N-mp.size()<<endl;
    for(i=1 ; i<=N ; i++){
        if(!mp[i])cout<<i<<" " ;

    }
    

    
    
    cout << endl;


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
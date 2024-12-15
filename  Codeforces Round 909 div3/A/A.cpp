//Bismillahir Rahman-ir Rahim
#include<complex>
#include<queue>
#include<set>
#include<unordered_set>
#include<list>
#include<stack>
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
#define sc scanf
#define pf printf
#define endl '\n'
#define INF 1<<30
#define ll_INF 1LL<<62
 
// const int M=1e5;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

using namespace std ;


void printCenteredTriangle(int baseLimit) {
    // Loop through each row from 1 to baseLimit
    for (int row = 1; row <= baseLimit; row++) {
        // Print spaces to center-align the row
        int spaces = baseLimit - row;  // The number of spaces needed before the numbers
        for (int s = 0; s < spaces; s++) {
            cout << " ";  // Print spaces to center the triangle
        }
        
        // Print numbers for the current row
        for (int num = 1; num <= row; num++) {
            cout << num << " ";  // Print numbers with a space
        }
        
        cout << endl;  // Move to the next line after printing each row
    }
}

void solve(){
    int baseLimit; 
    cout << "Enter the base level of the triangle: ";
    cout<<endl;
    cin >> baseLimit;
cout<<endl;
    printCenteredTriangle(baseLimit);
   
}

int main(){

   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);

    //tara ;
   
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
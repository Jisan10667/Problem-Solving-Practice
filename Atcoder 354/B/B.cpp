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

string decryptCaesarCipher(std::string text, int shift) {
    for (int i = 0; i < text.length(); i++) {
        if (isalpha(text[i])) { // Check if the character is an alphabet
            char base = islower(text[i]) ? 'a' : 'A';
            text[i] = (text[i] - base - shift + 26) % 26 + base; // Decrypt character
        }
    }
    return text;
}


void solve()
{  
   string cipher = "odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo";
    cout << "Original Cipher Text: " << cipher << endl;

    // Try all possible shifts from 1 to 25
    for (int shift = 1; shift < 26; shift++) {
        string decryptedText = decryptCaesarCipher(cipher, shift);
        cout << "Shift " << shift << ": " << decryptedText << endl;
    }
   
   
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
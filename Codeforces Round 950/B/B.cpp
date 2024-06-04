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
 
 const int M=2e5+3;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

using namespace std ;

// Function to split a string by spaces into a vector of words
vector<string> splitSentenceIntoWords(string &sentence) {
   
   vector<string>words ;
   stringstream ss(sentence) ;
   string word ;

   while(ss>>word)words.push_back(word) ;
   return words ;
}

// Comparator function to sort words by their length
bool compareByLength(const std::string &a, const std::string &b) {
    return a.length() < b.length();
}


void solve(){ 
  
   string sentence;
    
    // Read the whole sentence
    cout << "Enter a sentence: ";
    getline(std::cin, sentence);

    // Split the sentence into words
    vector<string> words = splitSentenceIntoWords(sentence);

    // Sort the words based on their length
    sort(words.begin(), words.end(), compareByLength);

 
    std::cout << "Words sorted by length:" << endl;
    for (const std::string &word : words) {
        std::cout << word << endl;
    }

  


}

int main(){
    #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
   
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
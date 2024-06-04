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


string multiply(string num1, string num2){
   int len1=num1.length() ;
   int len2=num2.length() ;

   if(len1==0 || len2==0)return "0" ;

   vector<int>res(len1+len2,0) ;

   int i_n1=0;


   for(int i=len1-1 ; i>=0 ; i--){

      int n1=num1[i]-'0', carry=0, i_n2=0 ;

      for(j=len2-1 ; j>=0 ; j--){
         int n2=num2[j]-'0' ;
         int sum=n1*n2 + res[i_n1+i_n2]+carry ; 
         carry=sum/10 ;
         result[i_n1+i_n2]=sum%10 ;
         i_n2++ ;

      }
      if(carry){
          result[i_n1+i_n2]+=carry ;
      }
      i_n1++ ;
   }

   int i=result.size() ;
   while(i>=0 && res[i]=='0')i-- ;

   if(i==0)return "0" ;
   string s="" ;

    while (i >= 0) s += to_string(result[i--]);

    return s;

 
}

void solve()
{
 

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
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n,m,M;
  cin>>n>>m>>M;
  vector<ll> a(n);
  rep(i,n){
    cin>>a[i];
  }
  ll dp[1001][1001];
  dp[0][0]=1;
  for(int i=1;i<=m;i++){
    rep(j,n+1){
      if(j-i>=0){
        dp[i][j]=(dp[i-1][j]+dp[i][j-i])%M;
      }else{
        dp[i][j]=dp[i-1][j];
      }
    }
  }
  rep(i,m+1){
    rep(j,n+1){
      cout << dp[i][j]<<" ";
    }
    cout << endl;
  }
  cout << dp[m][n];
}
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


ll dp[50+1][50+1][10000+1];
int main() {
  ll w,n,K;
  cin>>w>>n>>K;
  ll width[n],value[n];
  rep(i,n){
    cin>>width[i]>>value[i];
  }
  rep(i,n){
    rep(j,K+1){
      rep(k,w+1){
        if(j>0&&k>=width[i]){
          dp[i+1][j][k]=max(dp[i][j][k],dp[i][j-1][k-width[i]]+value[i]);
        }else{
          dp[i + 1][j][k] = dp[i][j][k];
        }
      }
    }
  }
  cout << dp[n][K][w];
}

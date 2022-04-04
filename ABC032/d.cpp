#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


int main() {
  ll n,w,vm=0,res;
  cin>>n>>w;
  ll a[n],b[n];
  rep(i,n){
    cin>>a[i]>>b[i];
    vm=max(vm,a[i]);
  }
  ll dp[n+1][n*vm+1];
  fill(dp[0],dp[0]+n*vm+1,100000);
  dp[0][0]=0;
  rep(i,n){
    rep(j,n*vm+1){
      if(j<a[i]){
        dp[i+1][j]=dp[i][j];
      }else{
        dp[i+1][j]=min(dp[i][j],dp[i][j-a[i]]+b[i]);
      }
    }
  }
  rep(i,n*vm+1){
    if(dp[n][i]<=w) res=i;
  }
  cout <<res<<endl;
}
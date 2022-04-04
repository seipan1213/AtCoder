#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n,m,M;
  cin>>n>>m>>M;
  vector<ll> a(n);
  ll dp[1000+1][1000+1];
  rep(i,n){
    cin>>a[i];
  }
  rep(i,n+1){
    dp[i][0]=1;
  }
  rep(i,n){
    for(int j=1;j<=m;j++){
      if(j-1-a[i]>=0){
        dp[i+1][j]=(dp[i+1][j-1]+dp[i][j]-dp[i][j-1-a[i]]+M)%M;
      }else{
        dp[i+1][j]=(dp[i+1][j-1]+dp[i][j])%M;
      }
    }
  }
  rep(i,n+1){
    rep(j,m+1){
      cout<<dp[i][j]<<" ";
    }
    cout <<endl;
  }
}
 
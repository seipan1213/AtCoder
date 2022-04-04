#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() { 
  ll n;
  cin >>n;
  vector<ll> a(n);
  rep(i,n){
    cin >>a[i];
  }
  bool dp[101][10001]={false};
  dp[0][0]=true;
  rep(i,n){
    rep(j,10000){
      if(dp[i][j]){
        dp[i+1][j]=true;
        if(j+a[i]<10000) dp[i+1][j+a[i]]=true;
      }
    }
  }
  int ans=0;
  rep(i,10000){
    if(dp[n][i]) ans++;
  }
  cout << ans <<endl;
}

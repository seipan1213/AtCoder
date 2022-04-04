#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >>n;
  vector<int> c(n);
  rep(i,n){
    cin>> c[i];
  }
  int dp[n];
  fill(dp,dp+n,100010001);
  rep(i,n){
    *lower_bound(dp,dp+n,c[i])=c[i];
  }
  int ans=n-(lower_bound(dp,dp+n,100010001)-dp);
  cout<<ans<<endl;
}
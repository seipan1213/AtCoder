#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;

ll dp[50+1][50+1][10001];
int main() {
  int w,n,K;
  cin >> w>>n>>K;
  ll wid[n],val[n];
  rep(i,n){
    cin >> wid[i]>> val[i];
  }
  rep(i,n){
    rep(j,K+1){
      rep(k,w+1){
        if(j>0&&k>=wid[i]){
          dp[i+1][j][k]=max(dp[i][j][k],dp[i][j-1][k-wid[i]]+val[i]);
        }else{
          dp[i+1][j][k] = dp[i][j][k];
        }
      }
    }
  }
  cout <<dp[n][K][w]<<endl;
}
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int dp[101][101][101];


int main() {
  int n,m;
  cin>> n >>m;

  rep(i,n){
    int a,b,c,w;
    cin>>a>>b>>c>>w;
    dp[a][b][c]=max(w,dp[a][b][c]);
  }
  rep(i,101){
    rep(j,101){
      rep(k,101){
        if(i){
          dp[i][j][k] = max(dp[i][j][k], dp[i-1][j][k]);
        }
        if(j){
          dp[i][j][k] = max(dp[i][j][k], dp[i][j-1][k]);
        }
        if(k){
          dp[i][j][k] = max(dp[i][j][k], dp[i][j][k-1]);
        }
      }
    }
  }
  rep(i,m){
    int x,y,z;
    cin>>x>>y>>z;
    cout << dp[x][y][z] <<endl;
  }
}

#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n,d;
  int c2=0,c3=0,c5=0;
  cin >>n>>d;
  while(d%2==0){
    d/=2;
    c2++;
  }
  while(d%3==0){
    d/=3;
    c3++;
  }
  while(d%5==0){
    d/=5;
    c5++;
  }
  if(d!=1){
    cout <<0<<endl;
    return 0;
  }
  vector<vector<vector<vector<double>>>> dp(n+1,vector<vector<vector<double>>>(c2+1,vector<vector<double>>(c3+1,vector<double>(c5+1))));
  dp[0][0][0][0]=1;
  rep(i,n){
    rep(j,c2+1){
      rep(k,c3+1){
        rep(l,c5+1){
          double w =dp[i][j][k][l]/6.0;
          dp[i+1][j][k][l]+=w;
          dp[i+1][min(j+1,c2)][k][l]+=w;
          dp[i+1][j][min(k+1,c3)][l]+=w;
          dp[i+1][min(j+2,c2)][k][l]+=w;
          dp[i+1][j][k][min(l+1,c5)]+=w;
          dp[i+1][min(j+1,c2)][min(k+1,c3)][l]+=w;
        }
      }
    }
  }
  cout << fixed <<setprecision(15)<<  dp[n][c2][c3][c5] << endl;
}
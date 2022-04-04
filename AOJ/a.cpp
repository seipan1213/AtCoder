#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  vector<string> s(2);
  rep(i,n){
    cin >> s[0];
    cin >> s[1];
    int dp[1001][1001];
    rep(j,s[0].size()){
      rep(k,s[1].size()){
        if(s[0][j]==s[1][k]){
          dp[j+1][k+1]=dp[j][k]+1;
        }else{
          dp[j+1][k+1]=max(dp[j+1][k],dp[j][k+1]);
        }
      }
    }
    cout << dp[s[0].size()][s[1].size()]<<endl;
  }
}

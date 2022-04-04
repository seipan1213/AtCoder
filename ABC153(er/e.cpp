#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int h,n;
  cin >>h>>n;
  int a[10001],b[10001];
  vector<int> dp(h+1,100010001);
  rep(i,n){
    cin>>a[i]>>b[i];
  }
  dp[0]=0;
  rep(i,n){
    rep(j,h+1){
      dp[min(j+a[i],h)]=min(dp[min(j+a[i],h)],dp[j]+b[i]);
    }
  }
  cout << dp[h]<<endl;
}
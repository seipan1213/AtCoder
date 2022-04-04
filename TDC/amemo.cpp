#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

bool dp[101][10001];
ll n;
vector<ll> a(101);

void f(ll i,ll j){
  int res;
  if(i==n){
    dp[n][j]=1;
    return;
  }
  if(dp[i+1][j]) return;
  f(i+1,j);
  f(i+1,j+a[i]);
}
int main() { 
  cin >>n;
  rep(i,n){
    cin >>a[i];
  }
  memset(dp,-1,sizeof(dp));
  f(0,0);
  int ans=0;
  rep(i,10000){
    if(dp[n][i]) ans++;
  }
  cout << ans <<endl;
}

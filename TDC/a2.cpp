#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;

bool dp[102][10010]={};

int main() {
  int n,count=0;
  cin >>n;
  vector<int> a(n);
  rep(i,n){
    cin>>a[i];
  }
  rep(i, n) dp[i][0] = true;
  rep(i,n){
    rep(j,10001){
      if(dp[i][j]){
      	dp[i+1][j]=true;
      	dp[i+1][j+a[i]]=true;
      }
    }
  }
  rep(j,10001){
    if(dp[n][j]) count++;
  }
  cout <<count<<endl;
} 

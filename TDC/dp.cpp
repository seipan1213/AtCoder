#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)



int main(){
  int n,sum=0;
  cin >> n;
  int dp[100][100];
  vector<int> a(n);
  rep(i,n){
    cin >> a[i];
    sum+=a[i];
  }
  rep(i,n){
    rep(j,sum+1){
      if(j>=a[i]){
        dp[i+1][j]=dp[i][j];
      }else{
        dp[i+1][j]=max(dp[i][j+1],dp[i][j-a[i]]+a[i]);
      }
    }
  }
  int ans =1;
  rep(i,n)rep(j,n){
    if(dp[i][j]!=0){
      ans++;
    }
  }
  cout << ans <<endl;
}
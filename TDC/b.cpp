#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;

int dp[1001][1001]={};

int main() {
  int na,nb;
  cin >>na>>nb;
  vector<int> a(na),b(nb),da(na),db(nb);
  rep(i,na) cin >>a[i];
  rep(i,nb) cin >>b[i];
  for (int i=na;i>= 0;i--) {
    for (int j=nb;j>=0;j--) {
      if (i==na&&j==nb) continue;
      if ((i+j)%2==0) {
        if (i==na)
          dp[i][j]=b[j]+dp[i][j+1];
        else if (j==nb)
          dp[i][j]=a[i]+dp[i+1][j];
        else
          dp[i][j]=max(a[i]+dp[i+1][j],b[j]+dp[i][j+1]);
      } else {
        if (i==na)
          dp[i][j]=dp[i][j+1];
        else if (j==nb)
          dp[i][j]=dp[i+1][j];
        else
          dp[i][j]=min(dp[i+1][j],dp[i][j+1]);
      }
    }
  }
  cout <<dp[0][0]<<endl;
} 

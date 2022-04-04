#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n,m,ma=0,mb=0;
  cin>>n>>m;
  ll M=1000000007;
  vector<ll> a(n),b(m);
  rep(i,n){
    cin>>a[i];
    ma+=a[i];
  }
  rep(i,m){
    cin>>b[i];
    mb+=b[i];
  }
  ll dpa[101][1001],dpb[101][1001];
  rep(i,mb+1){
    dpa[0][i]=1;
  }
  rep(i,ma+1){
    dpb[0][i]=1;
  }
  
  dpb[0][0]=1;
  for(int i=1;i<=m;i++){
    rep(j,mb+1){
      if(j-i>=0){
        dpa[i][j]=(dpa[i-1][j]+dpa[i][j-i])%M;
      }else{
        dpa[i][j]=dpa[i-1][j];
      }
    }
  }
  for(int i=1;i<=n;i++){
    rep(j,ma+1){
      if(j-i>=0){
        dpb[i][j]=(dpb[i-1][j]+dpb[i][j-i])%M;
      }else{
        dpb[i][j]=dpb[i-1][j];
      }
    }
  }
  rep(i,m+1){
    rep(j,mb+1){
      cout << dpa[i][j]<<" ";
    }
    cout << endl;
  }
  rep(i,n+1){
    rep(j,ma+1){
      cout << dpb[i][j]<<" ";
    }
    cout << endl;
  }
  cout<<dpa[m][mb]<<" "<<dpb[n][ma];
  //cout<<(dpa[m][mb]%1000000007*(dpb[n][ma]%1000000007))%1000000007<<endl;
}
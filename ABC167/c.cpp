#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll n,m,x;
ll mi =100000000;
vector<ll> c(12);
vector<vector<ll>> a(12, vector<ll>(12));

void f(ll i,vector<ll> b,ll ans){
  if(i==n){
    rep(i,m){
      if(b[i]<x){
        return;
      }
    }
    mi=min(mi,ans);
    return;
  }
  i++;
  f(i,b,ans);
  ans+=c[i-1];
  rep(j,m){
    b[j]+=a[i-1][j];
  }
  f(i,b,ans);
}

int main() {
  cin >>n>>m>>x;
  vector<ll> b(12,0);
  rep(i,n){
    cin >> c[i];
    rep(j,m){
      cin >> a[i][j];
    }
  }
  f(0,b,0);
  if(mi==100000000){
    cout<<-1 <<endl;
  }else{
    cout<<mi <<endl;
  }
  
}

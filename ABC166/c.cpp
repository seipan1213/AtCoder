#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n,m,a,b;
  cin>>n>>m;
  vector<ll> good(n,2);
  vector<ll> h(n);
  rep(i,n){
    cin>>h[i];
  }
  rep(i,m){
    cin >>a>>b;
    a--,b--;
    if(h[a]<h[b]){
      good[a]=0;
      if(good[b]==2){
        good[b]=1;
      }
    }else if(h[a]>h[b]){
      if(good[a]==2){
        good[a]=1;
      }
      good[b]=0;
    }else{
      good[a]=0;
      good[b]=0;
    }
  }
  ll count =0;
  for(auto au:good){
    if(au>0){
      count++;
    }
  }
  cout <<count<<endl;
}

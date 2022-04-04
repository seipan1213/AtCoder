#include <bits/stdc++.h>
#define rep(i,n) for (int i =0; i<(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;


vector<ll> a;
ll n,m,w;
ll ma=0;
int main() {
  cin >>n>>m;
  rep(i,n){
    cin >> w;
    a.push_back(w);
  }
  a.push_back(0);
  sort(a.begin(),a.end());
  rep(i,upper_bound(a.begin(),a.end(),m)-a.begin()){
    rep(j,upper_bound(a.begin(),a.end(),m-a[i])-a.begin()){
      rep(k,upper_bound(a.begin(),a.end(),m-a[i]-a[j])-a.begin()){
        auto au=upper_bound(a.begin(),a.end(),m-a[i]-a[j]-a[k])-a.begin()-1;
        if(a[i]+a[j]+a[k]+a[au]<=m) ma=max(ma,a[i]+a[j]+a[k]+a[au]);
      }
    }
  }
  cout << ma<<endl;
}
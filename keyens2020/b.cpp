#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


int main() {
  int n;
  cin >> n;
  vector<P> p(n);
  int x,l;
  rep(i,n){
    cin >> x>>l;
    p[i].first=x+l;
    p[i].second=x-l;
  }
  sort(p.begin(),p.end());
  int ans=0,t=-100000000;
  rep(i,n){
    if(t<=p[i].second){
      t=p[i].first;
      ans++;
    }
  }
  cout << ans <<endl;
}

#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  long double a,b;
  ll ma=0,w,n,nw;
  cin >> a>>b>>n;
  nw=n/6;
  vector<P> wa(4);
  for(int i=2;i<=5;i++){
    wa[i-2].first=floor(a*nw*i/b)-a*floor(nw*i/b);
    wa[i-2].second=i;
  }
  sort(wa.begin(),wa.end());
  if(floor(a*wa[0].first+1/b)-a*floor(wa[0].first+1/b)<floor(a*wa[0].first/b)-a*floor(wa[0].first/b)){
    for(int i=wa[0].first;i<n;i++){
      w=floor(a*i/b)-a*floor(i/b);
      if(ma>w) break;
      ma=max(w,ma);
    }
  }else{
    for(int i=wa[0].first;i>0;i--){
      w=floor(a*i/b)-a*floor(i/b);
      if(ma>w) break;
      ma=max(w,ma);
  }
  cout <<ma<<endl;
}

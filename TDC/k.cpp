#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Lis(vector<int> a){
  vector<int> dp(a.size(),1001001001);
  rep(i,a.size()){
    *lower_bound(dp.begin(),dp.end(),a[i])=a[i];
  }
  cout << lower_bound(dp.begin(),dp.end(),1001001001)-dp.begin()<<endl;
}

int main() {
  int n;
  cin >>n;
  vector<P> p(n);
  vector<int> a(n);
  rep(i,n){
    int x,y;
    cin >>x>>y;
    p[i]=P(x+y,x-y);
  }
  sort(p.begin(),p.end());
  rep(i,n){
    a[i]=-p[i].second;
  }
  Lis(a);
}
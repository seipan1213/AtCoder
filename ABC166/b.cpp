#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n,k,d,w;
  cin >>n>>k;
  set<int> a;
  rep(i,k){
    cin>>d;
    rep(j,d){
      cin >>w;
      a.insert(w);
    }
  }
  cout<< n-a.size()<<endl;
}

#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int x,n,mi=1000,ans;
  cin >>x>>n;
  vector<int> w(120),work(n);
  iota(w.begin(),w.end(), 0);
  rep(i,n){
    cin>> work[i];
  }
  sort(work.begin(),work.end());
  rep(i,work.size()){
    w.erase(w.begin()+work[i]-i);
  }
  rep(i,w.size()){
    if(abs(x-w[i])<mi){
      mi=abs(x-w[i]);
      ans=w[i];
    }
  }
  cout << ans<<endl;
}
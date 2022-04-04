#include<bits/stdc++.h>
#define rep(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  ll ans=0;
  cin >>n;
  rep(i,n+1){
    rep(j,n+1){
      rep(k,n+1){
        ans += gcd(k,gcd(i,j));
      }
    }
  }
  cout << ans <<endl;
}

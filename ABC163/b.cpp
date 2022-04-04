#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n,m,ans=0,w;
  cin >>n>>m;
  rep(i,m){
    cin >>w;
    ans+=w;
  }
  if(n<ans){
    cout << -1<<endl;
  }else{
    cout << n-ans<<endl;
  }
  
}

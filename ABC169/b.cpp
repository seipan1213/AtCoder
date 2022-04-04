#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

const ll ma=1000000000000000000;
ll n,ans=1;
int main() {
  cin>>n;
  vector<ll> a(n);
  rep(i,n){
    cin>> a[i];
    if(a[i]==0) {cout << 0<<endl; return 0; }
  }
  for(auto au: a){
    ans=ans*au;
    if(ans>ma) break;
  }
  if(ans>ma){
    cout <<-1<<endl;
  }else{
    cout <<ans<<endl;
  }
}

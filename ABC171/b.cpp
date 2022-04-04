#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  rep(i,n){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  int ans=0;
  rep(i,k){
    ans+=a[i];
  }
  cout<<ans<<endl;
}
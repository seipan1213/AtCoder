#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll n,m,k,ans=0,w;
ll a[200004],b[200004];
int main() {
  cin >>n>>m>>k;
  rep(i,n){
    cin>>a[i];
    if(i!=0) a[i]+=a[i-1];
  }
  rep(i,m){
    cin>>b[i];
    if(i!=0)b[i]+=b[i-1];
  }
  for(ll i=0;i<=n;i++){
    if(k>=a[i]){
      w=upper_bound(b+1,b+1+m,k-a[i])-b-1;
      ans=max(ans,w+i);
    }
  }
  cout<<ans<<endl;
}

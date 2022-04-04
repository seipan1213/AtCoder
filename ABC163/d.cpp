#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll INF = 1000000007;

int main() {
  ll n,k,ansn=1,ansk=1,ans=0;
  cin >> n >> k;
  n++;
  for(int i=k;i<=n;i++){
    rep(j,i){
      ansn=ansn*(n-j);
      ansk=ansk*(i-j);
    }
    ans+=(ansn/ansk);
    ans%=INF;
    ansn=1;ansk=1;
  }
  cout << ans<<endl;
}
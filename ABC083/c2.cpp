#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;


int main() {
  ll x,y,ans=0;
  cin >>x >>y;
  while(x<=y){
    x*=2;
    ans++;
  }
  cout << ans<<endl;
}
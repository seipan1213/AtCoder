#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;


int main() {
  ll n,k,ans=0;
  cin >>n>>k;
  priority_queue<P,vector<P>,greater<P>> q;
  rep(i,n){
    int a,b;
    cin >>a>>b;
    q.push(P(a,b));
  }
  rep(i,k){
    P p=q.top();q.pop();
    ans+=p.first;
    q.push(P(p.first+p.second,p.second));
  }
  cout <<ans<<endl;
}
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<ll,ll>;

int main() {
  ll n,k;
  cin >>n >>k;
  ll a[n],b[n];
  priority_queue<P,vector<P>,greater<P>> que;
  rep(i,n){
    cin>>a[i]>>b[i];
    que.push({a[i],b[i]});
  }
  ll ans = 0;
  while(k--){
    P q=que.top();
    que.pop();
    ans+=q.first;
    q.first+=q.second;
    que.push(q);
  }
  cout <<ans<<endl;
}
 
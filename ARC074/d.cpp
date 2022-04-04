#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n,w,ans=0;
  cin >> n;
  priority_queue<ll> que;
  rep(i,n*3){
    cin >> w;
    que.push(w);
  }
  rep(i,n){
    ll q=que.top();
    que.pop();
    ans+=q;
  }
  rep(i,n){
    que.pop();
  }
  rep(i,n){
    ll q=que.top();
    que.pop();
    ans-=q;
  }
  cout <<ans<<endl;
}
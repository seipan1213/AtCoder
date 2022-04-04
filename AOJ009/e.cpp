#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<ll,ll>;

int main() {
  ll n,h,hmax,ans=0;
  cin >> n>>h;
  hmax=h;
  ll a[n],b[n];
  priority_queue<ll> que;
  rep(i,n){
    cin >>a[i]>>b[i];
  }
  rep(i,n-1){
        h-=a[i];
    if(b[i]>=hmax-h){
      que.push(hmax-h);
      cout << hmax-h<<endl;
    }else{
      que.push(b[i]);
      cout << b[i]<<endl;
    }

    cout <<" ーｈ"<<a[i]<<" h"<<h<<endl;
    while(h<=0){
      ll q = que.top();
      que.pop();
      ans++;
      h+=q;
      cout<<"q"<<q<<"  h"<<h<<endl;
    }
  }
  cout <<ans<<endl;
}
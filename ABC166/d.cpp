#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  ll x,w;
  cin >>x;
  vector<ll> a;
  rep(i,100000){
    w=pow(i,5);
    a.push_back(w);
    for(int j=0;j<a.size();j++){
      if(w+a[j]==x){
        cout << i <<" "<< j*-1;
        return 0;
      }else if(w-a[j]==x){
        cout << i <<" "<< j;
        return 0;
      }
    }
  }
}

#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  ll a,b,c,k,ans=0;
  cin >> a>>b>>c>>k;
  b=a+b;
  c=b+c;
  rep(i,k){
    if(i<a){
      ans+=1;
    }else if(i<b){
    }else{
      ans-=1;
    }
  }
  cout<<ans<<endl;
}

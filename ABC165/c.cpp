#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll n,m,q,ma=0;
vector<vector<int>> b(50, vector<int>(4));;

void f(vector<int> a,int i){
  a.push_back(i);
  if(a.size()==n){
    ll ans=0;
    rep(j,q){
      if((a[b[j][1]-1]-a[b[j][0]-1])==b[j][2]){
        ans+=b[j][3];
      }
    }
    ma=max(ma,ans);
    return;
  }
  for(int k=i;k<=m;k++){
    f(a,k);
  }
  return;
}

int main() {
  cin >>n>>m>>q;
  vector<int> a;
  rep(i,q){
    cin >>b[i][0]>>b[i][1]>>b[i][2]>> b[i][3];
  }
  for(int i=1;i<=m;i++){
    f(a,i);
  }
  cout <<ma<<endl;
}

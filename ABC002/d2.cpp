#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;

int main() {
  int n,m,x,y,ans=0;
  cin >>n>>m;
  bool con[n][n]={};
  rep(i,m){
    cin >>x>>y;
    x--;y--;
    con[x][y]=con[y][x]=true;
  }
  for(int i=1;i<(1<<n);i++){
    bool ok=true;
    int t=bitset<32>(i).count();
    if(t<=ans) continue;
    rep(j,n){
      rep(k,j){
        if (i>>j&i>>k&1&& !con[j][k]) ok = false;
      }
    }
    if(ok)ans=t;
  } 
  cout <<ans<<endl;
}
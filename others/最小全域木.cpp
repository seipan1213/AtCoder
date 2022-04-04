#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;

int cost[1000][1000];
int mincost[1000];
bool used[1000];
int V;

int prime(){
  rep(i,V){
    mincost[i]=INF;
    used[i]=false;
  }
  mincost[0]=0;
  int res=0;
  
  while(true){
    int v=-1;

    rep(i,V){
      if(!used[i]&&(v==-1||mincost[i]<mincost[v])) v=i;
    }
    if(v==-1) break;
    used[v]=true;
    res += mincost[v];
    rep(i,V){
      mincost[i]=min(mincost[i],cost[v][i]);
    }
  }
  return res;
}

int main() {
  int n,m;
  cin >>n>>m;
  rep(i,m){
    int a,b,c;
    cin >>a >>b>>c;
    cost[a][b]=c;
  }
  prime();
}
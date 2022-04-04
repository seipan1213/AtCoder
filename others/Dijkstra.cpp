#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


int cost[100][100];
int d[100];
bool used[100];
int n,m,a,b,c;
int INF=100010001;
void djikstra(int s){
  fill(d,d+n,INF);
  fill(used,used+n,false);
  d[s]=0;

  while(true){
    int v=-1;
    rep(i,n){
      if(!used[i]&&(v==-1||d[i]<d[v])) v=i;
    }
    if(v==-1)break;
    used[v]=true;
    rep(i,n){
      d[i]=min(d[i],d[v]+cost[v][i]);
    }
  }
}

int main() {
  cin >> n>>m;
  rep(i,m){
    cin >> a>>b>>c;
    a--;b--;
    cost[a][b]=c;
    cost[b][a]=c;
  }
  djikstra(6);
}
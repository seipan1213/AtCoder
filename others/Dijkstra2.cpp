#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

struct edge {int cost,to;};
int c;
vector<edge> G[1001];
int d[1001];
const int INF=100100100;
int n,m;

void djikstra(int s){
  priority_queue<P,vector<P>,greater<P>> que;
  fill(d,d+c,INF);
  d[s]=0;
  que.push(P(0,s));
  while(!que.empty()){
    P p= que.top();que.pop();
    int v=p.second;
    if(d[v]<p.first) continue;
    for(int i=0;i<G[v].size();i++){
      edge e= G[v][i];
      if(d[e.to]>d[v] +e.cost){
        d[e.to] = d[v] + e.cost;
        que.push(P(d[e.to],e.to));
      }
    }
  }
}

int main() {
  cin >> n>>m;
  rep(i,m){
    int a,b,c;
    cin >> a>>b>>c;
    a--;b--;
    G[a][b].cost=c;
  }
  djikstra(0);
  
}
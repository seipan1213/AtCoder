#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;
 
struct edge{ll to,cost;};
ll n,m,t;
vector<ll> reward(100000);
vector<vector<edge> > G1(100000),G2(100000);
vector<ll> d1(100000,INF),d2(100000,INF);

void djikstra(vector<vector<edge>>& G,vector<ll>& d){
  priority_queue<P,vector<P>,greater<P>> que;
  d[0]=0;
  que.push(P(0,0));
  while(!que.empty()){
    P p= que.top();que.pop();
    int v=p.second;
    if(d[v]<p.first) continue;
    for(auto e:G[v]){
      if(d[e.to]>d[v] +e.cost){
        d[e.to] = d[v] + e.cost;
        que.push(P(d[e.to],e.to));
      }
    }
  }
}

int main() {
  cin >> n>>m>>t;
  rep(i,n){
    cin >> reward[i];
  }
  rep(i,m){
    int a,b,c;
    cin >> a>>b>>c;
    a--;b--;
    G1[a].push_back(edge{b,c});
    G2[b].push_back(edge{a,c});
  }
  djikstra(G1,d1);
  djikstra(G2,d2);
  ll ans=0;
  for(int i=0;i<n;i++){
    if(d1[i]==INF||d2[i]==INF||d1[i]+d2[i]>t) continue;
    ans=max(ans,reward[i]*(t-d1[i]-d2[i]));
  }
 cout <<ans<<endl;
}
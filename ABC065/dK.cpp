#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

struct UnionFind {
  vector<int> par;
  vector<int> rank;

  UnionFind(int n):par(n),rank(n){

    rep(i,n){
      par[i]=i;
      rank[i]=0;
    }
  }

  int find(int x){
    if(par[x]==x){
      return x;
    }else{
      return par[x]=find(par[x]);
    }
  }

  void unite(int x,int y){
    x=find(x);
    y=find(y);
    if(x==y) return;

    if(rank[x]<rank[y]){
      par[x]=y;
    }else{
      par[y]=x;
      if(rank[x]==rank[y]) rank[x]++;
    }
  }

  bool same(int x,int y){
    return find(x)==find(y);
  }

};

struct edge{int u,v,cost;};
struct ver{int p,x,y;};
bool comp(const edge& es1, const edge& es2){
  return es1.cost<es2.cost;
}
bool compX(const ver& v1, const ver& v2) {
	return v1.x < v2.x;
}
bool compY(const ver& v1, const ver& v2) {
	return v1.y < v2.y;
}
int E,n;
edge es[200000];
ver ve[100000];
ll kruskal(){
  ll res=0;
  sort(es,es+E,comp);
  UnionFind uni(E);
  rep(i,E){
    if(!uni.same(es[i].u,es[i].v)){
      uni.unite(es[i].u,es[i].v);
      res+=es[i].cost;
    }
  }
  return res;
}

int main() {
  cin>>n;
  rep(i,n){
    int a,b;
    cin >> a >>b;
    ve[i]={i,a,b};
  }
  E=2*(n-1);
  sort(ve,ve+n,compX);
  rep(i,n){
    es[i]={ve[i].p,ve[i+1].p,abs(ve[i].x -ve[i + 1].x) };
  }
  sort(ve,ve+n,compY);
  rep(i,n){    
    es[n-1+i]={ve[i].p,ve[i+1].p,abs(ve[i].y -ve[i + 1].y)};
  }
  ll ans=kruskal();
  cout << ans<<endl;
}
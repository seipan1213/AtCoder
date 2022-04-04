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

  void body(){
    rep(i,par.size()){
      cout <<par[i]<<" "<<rank[i]<<endl;
    }
  }
};


struct edge{int u,v,cost;};

bool comp(const edge& e1,const edge&e2){
  return e1.cost < e2.cost;
}

edge es[1000];
int V,E;
int kruskal(){
  sort(es,es+E,comp);
  UnionFind uni(V);
}
int main() {
  
}
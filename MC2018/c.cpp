#include <bits/stdc++.h>
#define rep(i,n) for (int i = 1; i <= (n); ++i)
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

int main() {
  int n;
  cin >>n;
  UnionFind uni(n);
  rep(i,n){
    int x;
    uni.unite();
  }
}
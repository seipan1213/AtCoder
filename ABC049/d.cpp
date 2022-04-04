#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

struct UnionFind {
  vector<int> par;
  vector<int> rank;

  UnionFind(int n):par(n),rank(n){
    for(int i=0;i<n;i++){
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
      cout <<par[i]<<" "<<rank[i]<<" Body"<<i<<endl;
    }
  }
};

int main(){
  int n,k,l;
  cin>>n>>k>>l;
  UnionFind uf(n),uf2(n);
  rep(i,k){
    int p,q;
    cin>>p>>q;
    p--;q--;
    uf.unite(p,q);
  }
  rep(i,l){
    int r,s;
    cin >>r>>s;
    r--;s--;
    uf2.unite(r,s);
  }
  map<P,int> ans;
  rep(i,n){
    ans[make_pair(uf.find(i),uf2.find(i))]++;
  }
  rep(i,n) cout <<ans[make_pair(uf.find(i),uf2.find(i))]<<endl;
}
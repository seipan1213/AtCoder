#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

struct UnionFind {
  vector<int> par;
  vector<int> rank;
  vector<int> size;

	UnionFind(int n) : par(n), rank(n),size(n){
		rep(i, n)
		{
			par[i] = i;
      size[i] = 1;
			rank[i] = 0;
		}
	}

  int find(int x){
    if(par[x]==x){
      return x;
    }else{
      return par[x]=find(par[x]);
    }
  }

	int si(int x) {
    return size[find(x)];
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
		size[x] += size[y];
		size[y] = size[x];
  }

  bool same(int x,int y){
    return find(x)==find(y);
  }
	void body()
	{
		rep(i, par.size()){
			cout << par[i] << " " << rank[i] << endl;
		}
	}
};

int main() {

}
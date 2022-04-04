#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

vector<vector<P>> G;
vector<int> res;

void dfs(int v,int p){//v 今の頂点　p vの親
  for(auto e : G[v]){//そのvに対してつながっている頂点を全部見る
    if(e.first==p)continue;//それが親だった場合はじく
  }
}

int main(){
  
}
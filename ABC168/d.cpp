#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

const int INF=100000000;
int main() {
  int n,m,w1,w2;
  cin >>n>>m;
  vector<int> ro[100003];
  rep(i,m){
    cin >>w1>>w2;
    w1--;w2--;
    ro[w1].push_back(w2);
    ro[w2].push_back(w1);
  }
  queue<int> q;
  vector<int> acc(n,INF);
  vector<int> pre(n,-1);
  acc[0]=0;
  q.push(0);
  while(!q.empty()){
    int v=q.front();
    q.pop();
    for(int u:ro[v]){
      if(acc[u]!=INF) continue;
      acc[u]=acc[v]+1;
      pre[u]=v;
      q.push(u);
    }
  }
  cout <<"Yes"<<endl;
  for(int i=1;i<n;i++){
    cout << pre[i]+1<<endl;
  }
}

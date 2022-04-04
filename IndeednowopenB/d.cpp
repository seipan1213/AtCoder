#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using LP = pair<ll,ll>;
using P = pair<ll,LP>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;

bool used[100][100];
int p[100][100];

int h,w,sy,sx,gy,gx;

ll prim(){
  ll res=0;
  priority_queue<P> que;
  que.push(P(0,LP(0,0)));
  while(!que.empty()){
    int cst=que.top().first;
    int y=que.top().second.first;
    int x=que.top().second.second;
    que.pop();
    if(used[y][x]) continue;
    used[y][x]=true;
    res+=cst;
    for(int i=0;i<4;i++){
      int ny=y+dy[i];
      int nx=x+dx[i];
      if(ny>=0&&ny<h&&nx>=0&&nx<w){
          que.push(P(p[y][x]*p[ny][nx],LP(ny,nx)));
      }
    }
  }
  return res;
}

int main(){
  cin>>h>>w>>sx>>sy>>gx>>gy;
  ll ans=0;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>>p[i][j];
      ans+=p[i][j];
    }
  }
  ans+=prim();
  cout<<ans<<endl;
  return 0;
}
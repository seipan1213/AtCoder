#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;
const int Inf=1e9;

int h,w,sy,sx,gy,gx;
vector<vector<char>> maze(51,vector<char>(51));
vector<vector<int>>  sht(51,vector<int>(51,Inf));

void bfs(){
  queue<P> q;
  q.push(P(sx,sy));
  sht[sx][sy]=0;
  while(!q.empty()){
    P p=q.front();q.pop();
    rep(i,4){
      int x=p.first+dx[i];
      int y=p.second+dy[i];
      if(x>=0&&y>=0&&x<h&&y<w&&sht[x][y]==Inf&&maze[x][y]=='.'){
        q.push(P(x,y));
        sht[x][y]=sht[p.first][p.second]+1;
        if(gx==x&&gy==y){
          cout<<sht[gx][gy]<<endl;
          return;
        }
      }
    }
  }
}

int main() {
  cin >> h>>w>>sx>>sy>>gx>>gy;
  sy--;sx--;gy--;gx--;
  rep(i,h){
    rep(j,w){
      cin >> maze[i][j];
    }
  }
  bfs();
}
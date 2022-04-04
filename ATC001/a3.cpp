#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;

P s;
int h,w;
char maze[500][500];
void dfs(int x,int y){
  if(maze[x][y]=='g'){
    cout <<"Yes"<<endl;
    exit(0);
  }
  maze[x][y]='#';
  rep(i,4){
    if(y+dy[i]>=0&&y+dy[i]<w&&x+dx[i]>=0&&x+dx[i]<h&&maze[x+dx[i]][y+dy[i]]!='#') dfs(x+dx[i],y+dy[i]);
  }
}

int main() {
  cin >>h >>w;
  rep(i,h){
    rep(j,w){
      cin >> maze[i][j];
      if(maze[i][j]=='s') s=P(i,j);
    }
  }
  dfs(s.first,s.second);
  cout << "No"<<endl;
}
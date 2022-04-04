#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

char maze[50][50];
int sht[50][50];
int INF = 1e7;
int h, w;
P s, g;
int x[4] = {1, 0, -1, 0}, y[4] = {0, 1, 0, -1};

int bfs()
{
  queue<P> q;
  q.push(s);
  sht[s.first][s.second] = 0;
  int dx, dy;
  while (!q.empty())
  {
    P p = q.front();
    q.pop();
    if (p.first == g.first && p.second == g.second)
      break;
    rep(i, 4)
    {
      dy = p.first + y[i];
      dx = p.second + x[i];
      if (0 <= dx && 0 <= dy && dx < w && dy < h && sht[dy][dx] == INF && maze[dy][dx] != '#')
      {
        q.push(make_pair(dy, dx));
        sht[dy][dx] = sht[p.first][p.second] + 1;
      }
    }
  }
  return sht[g.first][g.second];
}

int main()
{
  cin >> h >> w >> s.first >> s.second >> g.first >> g.second;
  s.first--;s.second--;g.first--;g.second--;
  rep(i, h)
  {
    rep(j, w)
    {
      cin >> maze[i][j];
      sht[i][j] = INF;
    }
  }
  int ans = bfs();
  cout << ans << endl;
}
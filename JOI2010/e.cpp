#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

char maze[1000][1000];
int sht[1000][1000];
int INF = 1e7;
int h, w, n, hp = 1;
P s, g;
int x[4] = {1, 0, -1, 0}, y[4] = {0, 1, 0, -1};

int ctoi(const char c)
{
  switch (c)
  {
  case '0':
    return 0;
  case '1':
    return 1;
  case '2':
    return 2;
  case '3':
    return 3;
  case '4':
    return 4;
  case '5':
    return 5;
  case '6':
    return 6;
  case '7':
    return 7;
  case '8':
    return 8;
  case '9':
    return 9;
  default:
    return -1;
  }
}
int bfs()
{
  queue<P> q;
  q.push(s);
  sht[s.first][s.second] = 0;
  int dx, dy;
  P p;
  while (!q.empty())
  {
    p = q.front();
    q.pop();
    int a = ctoi(maze[p.first][p.second]);
    if (a != -1 && a <= hp)
    {
      maze[p.first][p.second]='.';
      break;
    }
    rep(i, 4)
    {
      dy = p.first + y[i];
      dx = p.second + x[i];
      if (0 <= dx && 0 <= dy && dx < w && dy < h && sht[dy][dx] == INF && maze[dy][dx] != 'X')
      {
        q.push(make_pair(dy, dx));
        sht[dy][dx] = sht[p.first][p.second] + 1;
      }
    }
  }
  s.first = p.first;
  s.second = p.second;
  return sht[p.first][p.second];
}

int main()
{
  cin >> h >> w >> n;
  rep(i, h)
  {
    rep(j, w)
    {
      cin >> maze[i][j];
      if (maze[i][j] == 'S')
        s.first = i, s.second = j,maze[i][j] == '.';
      sht[i][j] = INF;
    }
  }
  int ans = 0;
  rep(i, n)
  {
    ans += bfs();
    hp++;
    rep(i, h) rep(j, w) sht[i][j] = INF;
  }
  cout << ans << endl;
}
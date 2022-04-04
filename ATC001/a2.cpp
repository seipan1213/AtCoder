#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

char a[500][500];
int w, h;
int dx, dy;
bool bl;
void dfs(int x, int y)
{
  if (a[x][y] == 'g')
  {
    bl = true;
    return;
  }
  a[x][y] = '#';
  dy = y;
  dx = x + 1;
  if (dx >= 0 && dx < h && dy >= 0 && dy < w && (a[dx][dy] == '.' || a[dx][dy] == 'g'))
    dfs(dx, dy);
  dx = x - 1;
  if (dx >= 0 && dx < h && dy >= 0 && dy < w && (a[dx][dy] == '.' || a[dx][dy] == 'g'))
    dfs(dx, dy);
  dx = x;
  dy = y + 1;
  if (dx >= 0 && dx < h && dy >= 0 && dy < w && (a[dx][dy] == '.' || a[dx][dy] == 'g'))
    dfs(dx, dy);
  dy = y - 1;
  if (dx >= 0 && dx < h && dy >= 0 && dy < w && (a[dx][dy] == '.' || a[dx][dy] == 'g'))
    dfs(dx, dy);
}

int main()
{
  cin >> h >> w;
  P s;
  rep(i, h)
  {
    rep(j, w)
    {
      cin >> a[i][j];
      if (a[i][j] == 's')
        s = make_pair(i, j);
    }
  }
  dfs(s.first, s.second);
  string ans = bl ? "Yes" : "No";
  cout << ans << endl;
}
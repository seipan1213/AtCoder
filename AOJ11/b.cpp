#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int a[50][50];
int w, h;
void dfs(int x, int y)
{
  a[x][y] = 0;
  for (int i = -1; i < 2; i++)
  {
    for (int j = -1; j < 2; j++)
    {
      int dx=x+i,dy=y+j;
      if(dx>=0&&dy>=0&&dx<h&&dy<w&&a[dx][dy]==1) dfs(dx,dy);
    }
  }
}

int main()
{
  cin >> w >> h;
  rep(i, h)
  {
    rep(j, w)
    {
      cin >> a[i][j];
    }
  }
  int ans=0;
  rep(i, h)
  {
    rep(j, w)
    {
      if (a[i][j] == 1)
        dfs(i, j),ans++;
    }
  }
  cout << ans <<endl;

}
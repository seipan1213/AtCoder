#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)


const int INF = 1001001001;

int main()
{
  int n, x, y;
  cin >> n >> x >> y;
  x--; y--;
  vector<int> ans(n);
  rep(i, n)
  {
    queue<int> q;
    vector<int> sht(n, INF);
    int p;
    sht[i] = 0;
    q.push(i);
    while (!q.empty())
    {
      p = q.front();
      q.pop();
      if (p + 1 < n && sht[p + 1] == INF)
        q.push(p + 1), sht[p + 1] = sht[p] + 1;
      if (p - 1 >= 0 && sht[p - 1] == INF)
        q.push(p - 1), sht[p - 1] = sht[p] + 1;
      if (p == x && sht[y] == INF)
        q.push(y), sht[y] = sht[p] + 1;
      if (p == y && sht[x] == INF)
        q.push(x), sht[x] = sht[p] + 1;
    }
    rep(i, n) ans[sht[i]]++;
  }
  rep(i, n) ans[i] /= 2;
  for (int i = 1; i < n; i++)
  {
    cout << ans[i] << endl;
  }
  return 0;
}

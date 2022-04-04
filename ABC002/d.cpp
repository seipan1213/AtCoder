#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
  int n, m, x, y, t;
  cin >> n >> m;
  bool con[15][15]={};
  rep(i, m)
  {
    cin >> x >> y;
    con[x - 1][y - 1] = con[y - 1][x - 1] = true;
  }
  int ans = 0;
  for(int i = 1 << n; --i; ){
    bool ok = true;
    t = bitset<32>(i).count();
    if (t <= ans)
      continue;
    rep(j, n)
    {
      rep(k, j)
      {
        if (i>>j&i>>k&1&& !con[j][k])
          ok = false;
      }
    }
    if (ok)
      ans = t;
  }
  cout << ans << endl;
}

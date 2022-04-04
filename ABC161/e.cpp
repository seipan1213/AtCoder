#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int n, k, c;
int a[100000];
int ans = 0;

void f(string s, int i, int sum)
{
  cout << sum;
  if (i == k || s.size() == 0)
  {
    return;
  }

  if (s[0] == 'o')
  {
    string sw = s;
    s.erase(0, 1);
    f(s, i, sum + 1);
    if (s.size() < c + 1) return;
    a[sum + 1]++;
    sw.erase(0, c + 1);
    f(sw, i + 1, sum + c + 1);
  }
  else
  {
    s.erase(0, 1);
    f(s, i, sum + 1);
  }
}
int main()
{
  string s;
  cin >> n >> k >> c >> s;
  f(s, 0, 0);
  cout << ans << endl;
  rep(i, n)
  {
    cout << a[i] << endl;
  }
}
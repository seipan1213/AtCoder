#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
  int n, k, c, count = 0;
  string s;
  cin >> n >> k >> c >> s;
  int a[200000] = {0}, b[200000] = {0};
  rep(i, s.size())
  {
    if (s[i] == 'o')
    {
      a[i] = 1;
      i += c;
      count++;
    }
    if (count == k)
    {
      break;
    }
  }
  count = 0;
  for (int i = s.size(); i >= 0; i--)
  {
    if (s[i] == 'o')
    {
      b[i] = 1;
      i -= c;
      count++;
    }
    if (count == k)
    {
      break;
    }
  }
  rep(i, n)
  {
    if (a[i] == b[i] && b[i] == 1)
    {
      cout << i+1 << endl;
    }
  }
}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};
const long INF = 1e9;

int main()
{
	int h, w, ans;
	string str;
	P p;
	p.first = -100;
	cin >> h >> w;
	rep(i, h)
	{
		cin >> str;
		rep(j, w)
		{
			if (str[j] == 'o')
			{
				if (p.first >= 0)
				{
					ans = abs(p.first - i);
					ans += abs(p.second - j);
					cout << ans << endl;
					return (0);
				}
				p.first = i;
				p.second = j;
			}
		}
	}
}
#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};
const int INF = 1e9;

int main()
{
	int q, cmd, x, c;
	cin >> q;
	map<ll, int> mp;
	rep(i, q)
	{
		cin >> cmd;
		if (cmd == 1)
		{
			cin >> x;
			mp[x]++;
		}
		else if (cmd == 2)
		{
			cin >> x >> c;
			mp[x] -= min(mp[x], c);
			if (mp[x] == 0)
				mp.erase(x);
		}
		else if (cmd == 3)
		{
			cout << mp.rbegin()->first - mp.begin()->first << endl;
		}
	}
}
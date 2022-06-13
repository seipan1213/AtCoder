#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};
const int INF = 1e9;

int main()
{
	int n, k, ans = 0;
	cin >> n >> k;
	vector<string> s(n);
	map<int, int> ma;
	rep(i, n)
	{
		cin >> s[i];
	}
	rep(i, 1 << n)
	{
		vector<int> alp(26);
		for (int j = 0; j < n; j++)
		{
			if ((i >> j) & 1)
			{
				int size = s[j].size();
				rep(l, size)
					alp[s[j][l] - 'a']++;
			}
		}
		int cnt = 0;
		rep(i, 26) if (alp[i] == k)
			cnt++;
		ans = max(ans, cnt);
	}
	cout << ans << endl;
}
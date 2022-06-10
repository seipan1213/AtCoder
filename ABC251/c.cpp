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
	int n, ans = 0, ma = 0;
	cin >> n;
	map<string, int> mp;
	vector<int> t(n, 0);
	vector<string> s(n);
	rep(i, n)
	{
		cin >> s[i] >> t[i];
		if (mp.count(s[i]) == 0)
		{
			mp[s[i]] = t[i];
			if (ma < t[i])
			{
				ma = max(ma, t[i]);
				ans = i + 1;
			}
		}
	}
	cout << ans << endl;
}
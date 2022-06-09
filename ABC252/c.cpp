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
	ll n, mi = INF;
	cin >> n;
	vector<string> a(n);
	vector<vector<int>> t(10, vector<int>(10));

	rep(i, n)
	{
		cin >> a[i];
		rep(j, 10)
		{
			t[a[i][j] - '0'][j]++;
		}
	}
	rep(i, 10)
	{
		ll time = 0;
		rep(j, 10)
		{
			time = max(time, (t[i][j] - 1) * 10 + j);
		}
		mi = min(mi, time);
	}
	cout << mi << endl;
}
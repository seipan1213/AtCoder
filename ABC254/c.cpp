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
	int n, k, back;
	cin >> n >> k;
	vector<vector<ll>> a(k, vector<ll>(n / k + 10, INF + 100));
	rep(i, n)
	{
		cin >> a[i % k][i / k];
	}
	rep(i, k)
	{
		sort(a[i].begin(), a[i].end());
	}
	back = a[0][0];
	rep(i, n)
	{
		if (back > a[i % k][i / k])
		{
			cout << "No" << endl;
			return (0);
		}
		back = a[i % k][i / k];
	}
	cout << "Yes" << endl;
}
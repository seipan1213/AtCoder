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
	int n, k, b, ma = -10;
	cin >> n >> k;
	vector<int> a(n);
	rep(i, n)
	{
		cin >> a[i];
		ma = max(ma, a[i]);
	}
	rep(i, k)
	{
		cin >> b;
		if (a[b - 1] == ma)
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
}
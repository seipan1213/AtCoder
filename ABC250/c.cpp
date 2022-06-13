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
	int n, q, c_i;
	cin >> n >> q;
	vector<int> num(n + 1), pos(n + 1), x(q);
	for (int i = 1; i <= n; i++)
	{
		num[i] = i;
		pos[i] = i;
	}
	rep(i, q)
	{
		cin >> x[i];
	}
	rep(i, q)
	{
		int ps1 = pos[x[i]];
		int ps2 = ps1;
		if (ps1 != n)
			ps2++;
		else
			ps2--;
		swap(num[ps1], num[ps2]);
		swap(pos[num[ps1]], pos[num[ps2]]);
	}
	for (int i = 1; i <= n; i++)
	{
		if (i != 1)
			cout << ' ';
		cout << num[i];
	}
	cout << endl;
}
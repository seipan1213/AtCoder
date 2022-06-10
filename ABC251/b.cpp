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
	int n, w;
	cin >> n >> w;
	vector<int> a(n, 0);
	set<int> mem;
	rep(i, n)
	{
		cin >> a[i];
	}
	rep(i, n)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (a[i] + a[j] + a[k] <= w)
					mem.insert(a[i] + a[j] + a[k]);
			}
			if (a[i] + a[j] <= w)
				mem.insert(a[i] + a[j]);
		}
		if (a[i] <= w)
			mem.insert(a[i]);
	}
	cout << mem.size() << endl;
}
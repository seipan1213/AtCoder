#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};
const long INF = 1e10;

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> ans(n, vector<int>(n));

	rep(i, n)
	{
		rep(j, i + 1)
		{
			if (j == 0 || j == i)
				ans[i][j] = 1;
			else
				ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}
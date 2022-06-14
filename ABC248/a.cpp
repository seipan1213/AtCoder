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
	string s;
	int ans = 0;
	cin >> s;
	rep(i, s.size())
	{
		ans += s[i] - '0';
	}
	ans = 45 - ans;
	cout << ans << endl;
}
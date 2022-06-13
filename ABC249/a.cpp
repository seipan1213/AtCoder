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
	int a, b, c, d, e, f, x;
	int t_len, a_len;
	cin >> a >> b >> c >> d >> e >> f >> x;
	t_len = (x / (a + c) * a + min(x % (a + c), a)) * b;
	a_len = (x / (d + f) * d + min(x % (d + f), d)) * e;
	if (t_len > a_len)
		cout << "Takahashi" << endl;
	else if (t_len == a_len)
		cout
			<< "Draw" << endl;
	else
		cout << "Aoki" << endl;
}
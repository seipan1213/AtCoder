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
	ll a, b, k;
	cin >> a >> b >> k;
	rep(i, b)
	{
		if (b <= a)
		{
			cout << i << endl;
			return (0);
		}
		a *= k;
	}
}
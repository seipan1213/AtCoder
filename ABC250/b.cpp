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
	int n, a, b;
	cin >> n >> a >> b;
	rep(i, n)
	{
		rep(j, a)
		{
			rep(k, n)
			{
				rep(l, b)
				{
					if (i % 2 == k % 2)
						cout << ".";
					else
						cout << "#";
				}
			}
			cout << endl;
		}
	}
}
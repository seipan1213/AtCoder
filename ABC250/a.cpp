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
	int h,w,r,c,ans = 4;
	cin >> h >> w >> r >> c;
	if (h == r || r == 1)
		ans--;
	if (w == c || c == 1)
		ans--;
	if (h == 1)
		ans--;
	if (w == 1)
		ans--;
	cout << ans << endl;
}
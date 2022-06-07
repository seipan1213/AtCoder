#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};
const int INF = 1e10;

int main()
{
	string n;
	int len = 0;
	cin >> n;
	len = n.length();
	cout << n[len - 2] << n[len - 1] << endl;
}
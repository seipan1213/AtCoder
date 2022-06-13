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
	cin >> s;
	int size = s.length();
	bool isLower = false, isUpper = false;
	set<int> se;

	rep(i, size)
	{
		if (islower(s[i]))
			isLower = true;
		else if (isupper(s[i]))
			isUpper = true;
		if (se.count(s[i]))
		{
			cout << "No" << endl;
			return (0);
		}
		se.insert(s[i]);
	}
	if (!isLower || !isUpper)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}
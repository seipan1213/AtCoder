#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const int INF=1e10;

int main()
{
	int a,b,c;
	cin >> a >> b>> c;
	if (a > b)
		cout << "Takahashi" <<endl;
	else if (a < b)
		cout << "Aoki" << endl;
	else if (c == 0)
		cout << "Aoki" << endl;
	else
		cout << "Takahashi" <<endl;
}
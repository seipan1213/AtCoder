#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const int INF=1e10;

int main(){
	ll a,b,c,d;
	vector<ll> ans(4,0);
	cin >> a >> b >> c >> d;
	ans[0] = a *c;
	ans[1] = a * d;
	ans[2] = b * c;
	ans[3] = b * d;
	sort(ans.rbegin(),ans.rend());
	cout << ans[0]<<endl;
}
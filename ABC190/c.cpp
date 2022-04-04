#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const int INF=1e10;

int n,m,k,ma;
vector<P> ab(100);
vector<P> cd(100);

void dfs(int cnt, vector<int> sum){
	if (cnt >= k)
	{
		int ans = 0;
		rep(i, m){
			if (sum[ab[i].first] > 0 && sum[ab[i].second] > 0)
				ans++;
		}
		ma = max(ma,ans);
		return ;
	}
	sum[cd[cnt].first]++;
	dfs(cnt + 1, sum);
	sum[cd[cnt].first]--;
	sum[cd[cnt].second]++;
	dfs(cnt + 1, sum);
}

int main(){
	cin >> n >> m;
	vector<int> sum(100,0);
	rep(i,m){
		cin >> ab[i].first >> ab[i].second;
		ab[i].first--;
		ab[i].second--;
	}
	cin >> k;
	rep(i,k){
		cin >> cd[i].first >> cd[i].second;
		cd[i].first--;
		cd[i].second--;
	}
	dfs(0,sum);
	cout << ma << endl;
}
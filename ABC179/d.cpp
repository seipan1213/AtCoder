#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const int INF=1e10;
const ll mod = 998244353;

int main(){
	ll n,k,x,y;
	cin >> n >> k;
	vector<ll> a;
	rep(i,k){
		cin >> x >> y;
		for(int j = x;j <= y;j++){
			a.emplace_back(j);
		}
	}
	sort(a.begin(),a.end());
	vector<ll> dp(200100,0);
	dp[0] = 1;
	rep(i,n){
		if(dp[i] == 0) continue;
		for(auto au:a){
			if(n >= i + au){
				dp[i+au]+=dp[i];
				dp[i+au]%=mod;
			}else break;
		}
	}
	cout << dp[n-1] << endl;
}
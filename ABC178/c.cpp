#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const int INF=1e9;
const ll mod = 1e9 + 7;

int main(){
	ll n,sum1=1,sum2=1,ans =1;
	cin >> n;
	rep(i,n){
		ans *= 10;
		sum1 *= 9;
		sum2 *= 8;
		ans%=mod;
		sum1%=mod;
		sum2%=mod;
	}
	ans -= (sum1 * 2);
	ans%=mod;
	ans += sum2;
	ans%=mod;
	ans=(ans+mod)%mod;
	cout << ans << endl;
}
#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 3; i < (n); i+=2)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const int INF=1e10;
const ll mod = 998244353;

int main(){
	ll n;
	ll ans = 0;
	cin >> n;
	for(ll i = 1;i*i<n*2;i++){
		if(i%2 == 1){
			if (n%i == 0) ans++;
		}
		else{
			if (n%i == i/2)ans++;
		}
	}
	cout << ans*2 << endl;
}
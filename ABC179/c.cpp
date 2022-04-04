#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const int INF=1e10;

int main(){
	ll n,ans=0;
	cin >> n;
	rep(i,n){
		rep(j,n){
			if(i*j<n)ans++;
			else break;
		}
	}
	cout << ans << endl;
}
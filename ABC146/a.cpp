#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
	ll a,b,x,l=0,r=1e9+1;
	cin >> a >> b >> x;
	while (r-l > 1){
		ll n = (l+r)/2;
		if (a*n+b*to_string(n).length() <= x){
			l = n;
		}else r = n;
	}
	cout << l <<endl;
}

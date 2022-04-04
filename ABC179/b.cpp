#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const int INF=1e10;

int main(){
	int n,a,b,ans=0;
	cin >> n;
	rep(i,n){
		cin >> a >> b;
		if(a==b) ans++;
		else{
			if (ans >= 3) break;
			ans = 0;
		}
	}
	if (ans >=3) cout << "Yes"<<endl;
	else cout << "No" << endl;
}
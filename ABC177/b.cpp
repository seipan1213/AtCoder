#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;


int main() {
	string a,b;
	int	cnt = 0,ma = 0;
	cin >> a >> b;
	rep(i,a.size() - b.size() + 1){
		cnt = 0;
		rep(j,b.size()){
			if(a[i+j] == b[j]){
				cnt++;
			}
		}
		ma = max(cnt,ma);
	}
	cout << b.size() - ma <<endl;
}
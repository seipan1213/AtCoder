#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const int INF=1e10;

int main(){
	int n,s,d;
	cin >> n>>s>>d;
	rep(i,n){
		int x,y;
		cin >>x >> y;
		if (x < s && d < y){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}
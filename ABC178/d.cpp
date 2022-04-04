#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const int INF=1e10;

int main(){
	int s;
	cin >>s;
	int dp[s/3 + 1][s] = {};
	dp[0][s] = s;
	rep(i,s/3 + 1){
		int sum = s;
		while(sum > 0){
			dp[i][sum] = 1;
		}
	}
}
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const int INF=1e10;


int main() {
	int	h,w;
	P	st,gl;
	cin >> h >> w >> st.first >> st.second >> gl.first >> gl.second;
	st.first--;st.second--;gl.first--;gl.second--;
	vector<string> s(h);
	rep(i,h) cin >> s[i];
	vector<vector<int>> dist(h,vector<int>(w,INF));
	deque<P> q;
	dist[st.first][st.second] = 0;
	q.emplace_back(st.first,st.second);
	while(!q.empty()){
		int	i = q.front().first;
		int	j = q.front().second;
		int	d = dist[i][j];
		q.pop_front();
		if (dist[i][j] != d) continue;
		rep(k,4){
			int	mi = dy[k] + i; int mj = dx[k] + j;
			if (mi < 0 || mi >= h || mj < 0 || mj >= w) continue;
			if (s[mi][mj] == '#') continue;
			if (dist[mi][mj] <= d) continue;
			dist[mi][mj] = d;
			q.push_front(P(mi,mj));
		}
		for (int ei = -2; ei <= 2; ei++){
			for (int ej = -2; ej <= 2; ej++){
				int mi = i + ei;int mj = j + ej;
				if (mi < 0 || mi >= h || mj <0 || mj >= w) continue;
				if (s[mi][mj] == '#') continue;
				if (dist[mi][mj] <= d) continue;
				dist[mi][mj] = d + 1;
				q.push_back(P(mi,mj));
			}
		}
	}
	int	ans = dist[gl.first][gl.second];
	if (ans == INF) ans = -1;
	cout << ans <<endl;
}
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const int INF=1e10;

int main(){
	string s;
	cin >> s;
	if (s[s.size()-1] == 's'){
		s+="es";
	}else{
		s+='s';
	}
	cout << s << endl;
}
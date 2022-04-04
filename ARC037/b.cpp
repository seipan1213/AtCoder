#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

vector<int> e[100];
bool used[100];
int a, b;
void dfs(int x)
{
  used[x] = true;
  a += e[x].size();
  b++;
  for (int v : e[x])
  {
    if(!used[v])dfs(v);
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  rep(i, m)
  {
    int v, w;
    cin >> v >> w;
    v--;
    w--;
    e[w].push_back(v);
    e[v].push_back(w);
  }
  int ans=0;
  rep(i,n){
    if(used[i])continue;
    a=b=0;
    dfs(i);
    if(a/2==b-1)ans++;
  }
  cout << ans <<endl;
}
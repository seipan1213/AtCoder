#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int h,w,k,black=0,b,ans=0;
  cin >>h>>w>>k;
  char m[h][w];
  rep(i,h){
    rep(j,w){
      cin>>m[i][j];
      if(m[i][j]=='#')black++;
    }
  }
  char copy[h][w];
  rep(i,1<<h){
    rep(j,1<<w){
      memcpy(copy, m, sizeof(m));
      b=black;
      rep(y,h){
        rep(l,w){
          if(i>>y&1){
            rep(x,sizeof(*copy)/sizeof(**copy)){
              if(copy[y][x]=='#'){
                b--;
              }
              copy[y][x]='1';
            }
          }
          if(j>>l&1){
            rep(x,sizeof(copy)/sizeof(*copy)){
              if(copy[x][l]=='#'){
                b--;
              }
              copy[x][l]='1';
            }
          }
        }
      }
      if(b==k){
        ans++;
      } 
    }
  }
  cout <<ans<<endl;
}
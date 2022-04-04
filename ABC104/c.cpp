#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(){
    int D, G, p[11], c[11],t,k=1e9;
    cin >> D >> G;
    for(int i = 0; i < D; ++i){
        cin >> p[i] >> c[i];
    }
    rep(i,1<<D){
      int ans=0,num=0;
      rep(j,D){
        if(i&1<<j) ans +=100*(j+1)*p[j]+c[j],num+=p[j];
        else t=j;
      }
      for(int j=0;j<p[t]&&ans<G;j++) ans+=100*(t+1),num++;
      if(ans>=G) k=min(k,num);
    }
    cout << k << endl;
}

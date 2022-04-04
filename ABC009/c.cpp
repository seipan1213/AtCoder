#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;

bool comp(const pair<char,int>& p1, const pair<char,int>& p2) {
  if(p1.first==p2.first){
    return p1.second>p2.second;
  }
  return p1.first<p2.first;
}
int main() {
  int n,k,count=0;
  string s;
  cin >> n>> k>>s;
  vector<pair<char,int>> w(n);
  bool b[n]={};
  if(n-1<k) {
    sort(s.begin(),s.end());
    cout <<s <<endl;
    return 0;
  }
  rep(i,n){
    w[i]=make_pair(s[i],i);
  }
  sort(w.begin(),w.end(),comp);
  rep(i,n){
    if(count>=k) break;
    if(s[i]!=w[i].first){
      swap(s[w[i].second],s[i]);
      rep(j,n){
        if(w[j].second==i){
          if(count<k){
            if(!b[w[i].second]){
              b[w[i].second]=true;
              count++;
            }
            if(count<k){
              if(!b[w[j].second]){
                b[w[j].second]=true;
                count++;
              }
            }else goto SKIP;
            swap(w[i].second,w[j].second);
          }
        }
      }
    }
  }
  SKIP:
  cout << s <<endl;
}
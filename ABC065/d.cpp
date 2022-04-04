#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
using PP = pair<P,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;

bool used[100000];

int n;
vector<PP> p1(100000),p2(100000);

ll prim(){
  ll res=0,mp;
  priority_queue<P,vector<P>,greater<P>> que;
  if(p1[0].first.first-p1[1].first.first<p2[0].first.second-p2[1].first.second){
    mp=p1[0].first.first-p1[1].first.first;
    que.push(P(p1[0].second,mp));
  }else{
    mp=p2[0].first.second-p2[1].first.second;
    que.push(P(p2[0].second,mp));
  }
  while(!que.empty()){
    P q=que.top();
    que.pop();
    if(used[q.first]) continue;
    used[q.first]=true;
    if(p1[0].first.first-p1[1].first.first<p2[0].first.second-p2[1].first.second){
      mp=p1[0].first.first-p1[1].first.first;
      que.push(P(p1[0].second,mp));
    }else{
      mp=p2[0].first.second-p2[1].first.second;
      que.push(P(p2[0].second,mp));
    }
    res+=q.second;
  }
  return res;
}

int main(){
  cin>>n;
  rep(i,n){
    cin >>p1[i].first.first>>p1[i].first.second;
    p2[i].first.first=p1[i].first.second;
    p2[i].first.second=p1[i].first.first;
  }
  sort(p1.begin(),p1.end());
  sort(p2.begin(),p2.end());
  cout<<prim()<<endl;
}
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  map<string,int> m;
  int n;
  string s;
  cin >>n;
  rep(i,n){
    cin>>s;
    if(m.count(s)){
      m[s]++;
    }else{
      m[s]=1;
    }
  }
  cout <<"AC x "<<m["AC"]<<endl;
  cout <<"WA x "<<m["WA"]<<endl;
  cout <<"TLE x "<<m["TLE"]<<endl;
  cout <<"RE x "<<m["RE"]<<endl;
}
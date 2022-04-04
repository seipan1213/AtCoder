#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


int main() {
  string s,t;
  cin >> s>>t;
  for(int i=s.size();i>=0;i--){
    bool left=true;
    rep(j,t.size()){
      if(s[i+j]!=t[j]&&s[i+j] !='?'){
        left=false;
      }
    }
    if(left){
      string ans="";
      int count=0;
      for(int j=i;j<t.size()+i;j++){
        s[j]=t[count];
        count++;
      }
      rep(j,s.size()){
        if(s[j]=='?'){
          ans+='a';
        }else{
          ans+=s[j];
        }
      }
      cout << ans <<endl;
      return 0;
    }
  }
  cout << "UNRESTORABLE"<<endl;
}
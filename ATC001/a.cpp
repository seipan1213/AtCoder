#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 1; i < n; i++)

int main(){
  int h,w;
  P s;
  cin >> h >>w;
  char maze[h+2][w+2]={};
  rep(i,h+1){
    rep(j,w+1){
      cin >> maze[i][j];
      if(maze[i][j] =='s') s =make_pair(i,j);
    }
  }
  stack<P> st;
  st.push(s);
  while(st.size()!=0){
    if(maze[s.first+1][s.second]=='g'||
      maze[s.first-1][s.second]=='g'||
      maze[s.first][s.second+1]=='g'||
      maze[s.first][s.second-1]=='g'){
      cout << "Yes"<<endl;
      return 0;
    }
    if(maze[s.first+1][s.second]=='.'){ 
      st.push(make_pair(s.first+1,s.second));
      maze[s.first+1][s.second]='e';
      s.first++;
      continue;
    }
    if(maze[s.first-1][s.second]=='.'){ 
      st.push(make_pair(s.first-1,s.second));
      maze[s.first-1][s.second]='e';
      s.first--;
      continue;
    }
    if(maze[s.first][s.second+1]=='.'){ 
      st.push(make_pair(s.first,s.second+1));
      maze[s.first][s.second+1]='e';
      s.second++;
      continue;
    }
    if(maze[s.first][s.second-1]=='.'){ 
      st.push(make_pair(s.first,s.second-1));
      maze[s.first][s.second-1]='e';
      s.second--;
      continue;
    }
    s=st.top();
    st.pop();
  }
  cout << "No"<<endl;
}
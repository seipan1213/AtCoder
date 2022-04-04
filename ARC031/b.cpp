#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 1; i < n; i++)

int main()
{
  int count = 1;
  char island[12][12] = {};
  P s,w;
  rep(i, 11)
  {
    rep(j, 11)
    {
      cin >> island[i][j];
      if (island[i][j] == 'o')
        count++, w = make_pair(i, j);
    }
  }
  priority_queue<P> pq;
  rep(i, 11)
  {
    rep(j, 11)
    {
      int ans = 0;
      if (island[i][j] == 'x')
      {
        if (island[i + 1][j] == 'o')
          ans++;
        if (island[i - 1][j] == 'o')
          ans++;
        if (island[i][j + 1] == 'o')
          ans++;
        if (island[i][j - 1] == 'o')
          ans++;
        if (ans > 1)
        {
            pq.push(make_pair(i, j));
        }
      }
    }
  }
  while (pq.size() != 0)
  {
    stack<P> st;
    s=w;
    st.push(s);
    int chain = 1;
    bool bol[12][12]={};
    island[pq.top().first][pq.top().second]='o';
    bol[s.first][s.second]=true;
    while (st.size() != 0)
    {
      bol[s.first][s.second]=true;
      if (island[s.first + 1][s.second] == 'o' && !bol[s.first + 1][s.second])
      {
        st.push(make_pair(s.first, s.second));
        s.first++;
        chain++;
        continue;
      }
      if (island[s.first - 1][s.second] == 'o' && !bol[s.first - 1][s.second])
      {
        st.push(make_pair(s.first, s.second));
        s.first--;
        chain++;
        continue;
      }
      if (island[s.first][s.second + 1] == 'o' && !bol[s.first][s.second + 1])
      {
        st.push(make_pair(s.first, s.second));
        s.second++;
        chain++;
        continue;
      }
      if (island[s.first][s.second - 1] == 'o' && !bol[s.first][s.second - 1])
      {
        st.push(make_pair(s.first, s.second));
        s.second--;
        chain++;
        continue;
      }
      
      s = st.top();
      st.pop();
    }
    if (count == chain)
    {
      cout << "YES" << endl;
      return 0;
    }
    island[pq.top().first][pq.top().second]='x';
    pq.pop();
  }
  cout << "NO" << endl;
}
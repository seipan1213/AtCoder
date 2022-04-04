#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

ll sum=0;
void plu(string s){
    string now;
    ll ans =0;
    rep(i,s.size()){
        if(s[i] =='+'){
            sum+=stoll(now.c_str());
            now="";
        }else now+=s[i];
    }
    sum+=stoll(now.c_str());
}
void sumrp(int si,string s){
    if(si<0){  
        plu(s);
        return;
    }
    sumrp(si-1,s);
    if(si>0){
        s.insert(si,"+");
        sumrp(si-1,s);
    }
}
int main(){
    string s;
    cin >> s;
    sumrp(s.size()-1,s);
    cout << sum <<endl;
}

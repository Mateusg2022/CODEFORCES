#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s, t;
  cin >> s >> t;
  if(s.size() != t.size()){
      cout << "NO" << endl;
      return;
  }
  
  int n = s.size();
  for(int i=0;i<n;i++){
    if(s[i] != t[n-i-1]){
      cout << "NO" << endl;
      return;
    }
  }cout << "YES" << endl;
} 

int main(){
  solve();
}

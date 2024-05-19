#include <bits/stdc++.h>
using namespace std;
//precisei olhar a resolucao pra ter uma ideia
//feelsBad
void solve(){
  int n; cin >> n;
  string s; cin >> s;
  int count_U = 0;

  for(int i=0;i<n;i++)
    if(s[i] == 'U') count_U++;

  if(count_U & 1) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int main(){
  int tt; cin >> tt;
  while(tt--){
    solve();
  }
}

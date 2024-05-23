#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,m; cin >> n >> m;
  string a,b;//encontrar a em b
  cin >> a; cin >> b;
  int it = 0;
  //1011
  //1111
  for(int i=0;i<m;i++){
    if(b[i] == a[it])
      it++;
  }
  cout << it << endl;
}

int main(){
  int tt; cin >> tt;
  while(tt--){
    solve();
  }
}

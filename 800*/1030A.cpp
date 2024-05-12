#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin >> n;
  int op;
  bool ez = true;
  while(n){
    cin >> op;
    if(op){
      ez = false;
    }
    --n;
  }
   if(ez) cout << "EASY" << endl;
   else cout << "HARD" << endl;
}


int main(){
  solve();
}

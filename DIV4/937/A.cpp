#include <bits/stdc++.h>
using namespace std;

void solve(){
  int left,mid,right;
  cin >> left >> mid >> right;

  if(left < mid && mid < right)
      cout << "STAIR" << endl;
  else if(left < mid && mid > right)
      cout << "PEAK" << endl;
  else
      cout << "NONE" << endl;
}

int main(){
  int t; cin >> t;
  while(t){
    solve();
    --t;
  }
}

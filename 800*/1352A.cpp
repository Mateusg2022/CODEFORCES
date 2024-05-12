#include <bits/stdc++.h>
using namespace std;

void solve(){
  int num; cin >> num;
  int curr = num, p = 1;
  vector<int> ans;
  
  //curr = 5009
  //curr % 1 = 0 
  //curr % 10 = 9 -----------> curr - (curr%10*p) = 5000
  //curr % 100 = 9
  //curr % 1000 = 9
  //curr % 10000 = 5009

  while(curr > 0){
    if(curr % 10 > 0){
      ans.push_back(curr%10 * p);
    }
    p *= 10;
    curr = curr / 10;
  }

  int n = ans.size();
  cout << n << endl;
  for(int i=0;i<n;i++){
    cout << ans[i] << " ";
  }cout << endl;
}
int main(){
  int t; cin >> t;
  while(t){
    solve();
    --t;
  }
}

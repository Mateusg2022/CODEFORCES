#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n, k; cin >> n >> k;
  int temp;

  map<int,int> freq;
  bool ok = false;
  for(int i=0;i<n;i++){
    cin >> temp;
    freq[temp]++;
    if(freq[temp] >= k){
      ok = true; 
    }
  }
  if(n < k){
    cout << n << endl;
    return;
  }
  cout << (ok ? k-1 : n) << endl;

}

int main(){
  int tt; cin >> tt;
  while(tt--){
      solve();
  }
}
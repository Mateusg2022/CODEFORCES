#include <bits/stdc++.h>
using namespace std;
#define fori(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define pb push_back
void solve(){
  int n; cin >> n;
  int a,b;
  int capacity = 0, maxLot = 0;
  fori(i,n){
    cin >> a >> b;
    capacity -= a;
    capacity += b;

    if(capacity > maxLot)
      maxLot = capacity;
  }
  cout << maxLot << endl;
}

int main(){
  solve();
}

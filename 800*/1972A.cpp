#include <bits/stdc++.h>
using namespace std;

#define fori(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ll long long
void solve(){
  int n;
  cin >> n;
  vector<int> a,b; int a_insert, b_insert;
  fori(i,n){
    cin >> a_insert;
    a.pb(a_insert); 
  }
  fori(i,n){
    cin >> b_insert;
    b.pb(b_insert);
  }
  ll count = 0;
  fori(i,n){
    if(a[i] > b[i]){
      ++count;
      for(int j=n-1;j>i;j--){
	a[j] = a[j-1];
      } 
      a[i] = b[i];
    }
  }
  cout << count << endl;
  //ok
  //fori(i,n) cout << a[i] << " "; cout << endl;
}

int main(){
  int tt; cin >> tt;
  while(tt){
    solve();
    --tt;
  }
}

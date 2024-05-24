#include <bits/stdc++.h>
using namespace std;
#define fori(i,n) for(int i=0;i<n;i++)
void solve(){
  string s; cin >> s;
  int n = s.size();
  int count1=0,count0=0;
  
  fori(i,n){
    
    if(s[i] == '1'){
      count1++;
      if(count0 < 7) count0 = 0;
    }else{
      count0++;
      if(count1 < 7) count1 = 0;
    }
  }

  if(count1 > 6 || count0 > 6)	cout << "YES" << '\n';
  else cout << "NO" << '\n';
}

int main(){
  solve();
}

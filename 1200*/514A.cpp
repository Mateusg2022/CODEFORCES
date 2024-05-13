#include <bits/stdc++.h>
using namespace std;

void solve(){
  //inverting a number is:
  //replace a digit t with 9 - t
  //Try to transfor the initial number in the minimum positive number
  //just inverting some digits (possibly, zero)
  string s; cin >> s;
  int n = s.size();

  for(int i=0;i<n;i++){
    if((s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9') && (i != 0)){
      cout << 9-(s[i] - '0');
    }else if((s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8') && (i == 0)){
      cout << 9-(s[i] - '0');
    }else{
      cout << s[i];
    }
  }cout << '\n'; 
}

int main(){
  solve();
}

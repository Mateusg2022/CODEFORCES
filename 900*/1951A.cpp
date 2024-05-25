#include <bits/stdc++.h>
using namespace std;

bool notAjdacent(string s){
  int n = s.size();
  for(int i=0;i<n-1;i++){
    if(s[i] == '1' && s[i+1] == '1'){
      return false;
    }
  }
  return true;
}

/*
void solve(){

  int n; cin >> n;
  string s; cin >> s;

  if(s.size() == 1 && s[0] == '1'){
    cout << "NO" << endl;
    return;
  }else if(s.size() == 1 && s[0] == '0'){
    cout << "YES" << endl;
    return;
  }

  int countOnes = 0;
  for(int i=0;i<n;i++){
    if(s[i] == '1') countOnes++;
  }
  if(countOnes & 1){
    cout << "NO" << endl;
    return;
  }

  //talvez uma abordagem com two pointers
  //um começa em 0 e outro no final

  for(int l=0, r=n-1; r-l > 1; ){

    while(s[l] != '1' || s[r] != '1'){
      if(r == l){
	cout << "YES" << endl;
	return;
      }
      if(s[l] != '1') l++;
      else r--;
    }
    
   // cout << s[l] << " " << s[r] << endl;

    if(s[l] == '1' && s[r] == '1' && r != l){
      l++; r--;
    }else{
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;

}
*/

void solve(){
  
  int n; cin >> n;
  string s; cin >> s;

  int isEven = 0;
  for(int i=0;i<n;i++){ 
    if(s[i] == '1')
      isEven++;
  } 
  //1011011010101 yes
  //1001001110 no

  //numero impar de 1's --> NO
  if(isEven & 1){
    cout << "NO" << endl;
    return;
  }
  //nenhuma lampada acesa --> YES
  if(isEven == 0){
    cout << "YES" << endl;
    return;
  }else if(isEven == 2){
    if(notAjdacent(s)){
      cout << "YES" << endl;
      return;
    }else{
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl; 
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }
}

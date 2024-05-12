#include <bits/stdc++.h>
using namespace std;

bool isPalindromo(string s){
  int right = s.size()-1;
  int left = 0;

  while(left - right != 1){
    if(s[left] != s[right])
	return false;
    ++left; --right;
  }
  return true;
}

int main(){
  
  //verify palindromo
  string s = "aaaabaabbaabaaaa";
  isPalindromo(s) ? cout << "eh palindromo" << endl : cout << "nao eh palindromo" << endl;
  
  cout << "should be: " << isPalindromo("mateussuetam") << endl;
  cout << "shouldnt be: " << isPalindromo("kajnsdjansd") << endl;

  cout << "C:" << endl;
}

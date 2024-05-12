#include <bits/stdc++.h>
using namespace std;

int main(){
  int X = 0;
  string s;
  int n;
  cin >> n;

  while(n){

    cin >> s;
    if(s[0] == '-' || s[2] == '-') X--;
    else X++;

    --n;
  }
  cout << X << endl;
}

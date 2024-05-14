#include <bits/stdc++.h>
using namespace std;

//For a positive integer n let's define a function f:
//f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn
//Your task is to calculate f(n) for a given integer n.

#define ll long long
void solve(){
  
  //ll int n; cin >> n;
  ll int n = 1000000000;
  ll int factor = -1;
  ll int sum = 0;
  for(ll int i=1;i<=n;i++){
    sum += factor * i;
    factor *= -1;
  }
  cout << sum << endl;
}

int main(){
  ll int n; cin >> n;
  ll int sum = 0;
  //cout << solve(n, 1, sum) << endl;
  if(n%2==0) 
    cout << n/2 << endl;
  else
    cout << ((n-1)/2)-n << endl;

}

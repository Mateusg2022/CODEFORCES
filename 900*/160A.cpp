#include <bits/stdc++.h>

using namespace std;
#define fori(i,n) for(int i=0;i<n;i++)

bool compare(int a, int b){
  return a > b;
}

void solve(){
  int n; cin >> n;
  vector<int> v(n);
  
  fori(i,n)
    cin >> v[i];
  
  int mySum = 0, totalSum = 0;
  fori(i,n){
    totalSum += v[i];
  }

  sort(v.begin(), v.end(), compare);
  int count = 0;
  //cout <<"a: " << v[0] << endl;
  for(int i=0;i<n;i++){
    if(mySum > totalSum - mySum)
	break;
    mySum += v[i];
    count++;
  }
  cout << count << endl;
}

int main(){
  solve();
}

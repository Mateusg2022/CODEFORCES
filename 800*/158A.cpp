#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  vector<int> pos(n);
  int count=0;
  int num;
  for(int i=0;i<n;i++){
    cin >> num;
    pos[i] = num;
  }
  //positive, >= pos[k]
  for(int i=0;i<n;i++){
    if(pos[i] >= pos[k-1] && pos[i] > 0)
      count++;
  }

  cout << count << endl;
}

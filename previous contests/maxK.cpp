#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int gcd(int x, int y){

  int maxDivisor = 1;
  for(int i=1;i<=y;i++){
    if(x%i == 0 && y%i ==0)
      maxDivisor = i;
  }
  return maxDivisor;

}

int findY(int x){
  int max=0;
  int curr=0;
  int ans=0;
  for(int y=1;y<x;y++){
    curr = gcd(x,y) + y;
    if(curr > max){
      max = curr;
      ans = y;
    }
  }
  return ans;
}

int main(){
  int num, x;
  cin >> num;
  vector<int> vet;
  for(int i=0;i<num;i++){
    cin >> x;
    vet.push_back(x);
  }
  for(int i=0;i<vet.size();i++){
    cout << findY(vet[i]) << endl;
  }
}

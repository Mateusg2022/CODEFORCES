#include <bits/stdc++.h>
using namespace std;
//12 7 7 ->expected YES found NO
bool isPossible(int n, int m, int k){

  //12 4 6
  //caso trivial, só existe uma cor
  if(m == 1)
      return false;
  
 //int num = (floor(n/m)) * (m-1) + (n % m) - 1;
 //if(num > k)
 //  return true;

 //sooo.. i took a look at the solucion a little and i found out that
 //Bob can not make it if there's not a color i where:
 // n - k >  i 
  map<int,int> hash;
  int index=1;
  for(int i=0;i<n;i++){
    hash[index++]++;

    //usa uma cor de cada vez, quando acabar volta pra primeira cor
    if(index == m+1)
	index = 1;
  }

  //itero o map
  for(auto it = hash.begin(); it != hash.end() ; it++){
   // cout << "color " << it->first << ": " << it->second << endl;
    if(n - k <= it->second)
	return false;
  }
  return true;
}

int main(){
  int t,n,m,k;
  cin >> t;
  while(t){
    cin >> n >> m >> k;
   
    if(isPossible(n,m,k)) cout << "YES" << endl;
    else cout << "NO" << endl;

    --t;
  }
}

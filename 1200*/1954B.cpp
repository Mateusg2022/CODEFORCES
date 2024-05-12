#include <bits/stdc++.h>
using namespace std;

//I took a look at the solution theory

int maxPrefix(vector<int>& arr){
  int equal = arr[0];
  int count = 0;
  for(int i=0;i<arr.size();i++){
    if(arr[i] == equal)
      count++;
    else
      break;
  }return count;
}

int maxSufix(vector<int>& arr){
  int n=arr.size();
  int equal = arr[n-1];
  int count = 0;
  for(int i=n-1;i>0;i--){
    if(arr[i] == equal)
      count++;
    else
      break;
  }return count;
}

int Beetween(vector<int>& arr){
  int n = arr.size();
  int previous = -1;
  int ans=INT_MAX;

  for(int i=0;i<n;i++){
    if(arr[i] != arr[0] && previous != -1){
      ans = min(ans, i - previous - 1);
      previous = i;
    }else if(arr[i] != arr[0]){
      previous = i;
    }
  }return ans;
}

bool allTheSame(vector<int>& arr){
  int equals = arr[0];
  for(auto& i : arr){
    if(i != equals)
	return false;
  }return true;
}

//using prefiz
//using sufix
//subarray consecutive differents
void solve(vector<int>& arr){

    if(allTheSame(arr)){
      cout << -1 << endl;
      return;
    }

  int n = arr.size();

  //it's not beatiful
  if(arr[0] != arr[n-1]){
    cout << "-1" << endl;
    return;
  }
  if(n <= 2){
    cout << -1 << endl;
    return;
  }
  int prefix = maxPrefix(arr);
  int sufix = maxSufix(arr);
  int beetween = Beetween(arr); 
   // cout << "prefix: " << prefix << " sufix: " << sufix << " beetween: " << beetween << endl;
    cout <<  min(prefix,min(beetween,sufix)) << endl;
  
}
int main(){
  int qntTestCases;
  int qnt,num;
  cin >> qntTestCases;
  vector<int> vet;
  while(qntTestCases){

    cin >> qnt;
    
    for(int i=0;i<qnt;i++){
      cin >> num;
      vet.push_back(num);
    }
    solve(vet);
    vet.clear();


    qntTestCases--;
  }
}


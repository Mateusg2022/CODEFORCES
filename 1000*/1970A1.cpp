#include <bits/stdc++.h>
using namespace std;
#define fori(i,n) for(int i=0;i<n;i++)
#define forj(j,n) for(int j=0;j<n;j++)
#define ii pair<int,int>
#define pb push_back

bool Ordem(ii a, ii b){
  if(a.second != b.second)
    return a.second < b.second;
  return a.first > b.first;
}

void solve(){
  string s; cin >> s;
  //string s = "(()(()))";
  int n = s.size();
  vector<ii> prefixBalance(n,{0,0});
  int currSum = 0;
  prefixBalance[0] = {1,0};  
  //preenche a tabela de prefixos
  for(int i=1;i<n;i++){
    
    if(s[i-1] == '(')
      prefixBalance[i] = { i+1,++currSum };
    else
      prefixBalance[i] = { i+1,--currSum };

  }
        
  //fori(i,n){ cout << prefixBalance[i].first << " " << prefixBalance[i].second << endl; }
  //sort(prefixBalance);
  sort(prefixBalance.begin(), prefixBalance.end(), Ordem);
  
  fori(i,n){
    cout << s[prefixBalance[i].first - 1];
  }cout << endl;
}

int main(){
    solve();
}

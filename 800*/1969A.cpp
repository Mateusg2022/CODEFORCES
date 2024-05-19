#include <bits/stdc++.h>
using namespace std;
#define ii pair<int,int>
#define pb push_back
#define fori(i,n) for(int i=0;i<n;i++)
#define forj(j,n) for(int j=0;j<n;j++)
void  solve(){

  int n; cin >> n;
  map<int, int> v;
  int num;
  vector<int> vet;
  fori(i,n){
    cin >> num;
    vet.pb(num);
    v[num] = i+1;
  } 
  bool ok = false;
  fori(i,n){
  //se o melhor amigo de I é melhor amigo dele tbm, 2 convites bastam
    if(v[i+1] == vet[i])
      ok = true;
  }
  if(ok) cout << 2 << endl;
  else cout << 3 << endl;

}

int main(){
  int tt; cin >> tt;
  while(tt--){
    solve();
  }
}

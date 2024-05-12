#include <bits/stdc++.h>
using namespace std;

void solve(){

  int n; cin >> n;
  int n2 = 2*n;
  if(n%2 == 1){
    string s;
    int sinal = 1, aux = 1;
    for(int w=0;w<n;w++){
        
        for(int i=0;i<2;i++){
          for(int j=0;j<n;j++){
            if(sinal == 1){
              cout << "##";
            }else if(sinal == -1){
              cout << "..";
            }
            sinal *= -1;
          }
          sinal *= -1;
          cout << endl;
        }
        sinal *= -1;
    }
  }else{
    string s;
    int sinal = 1, aux = 1;
    for(int w=0;w<n;w++){
        for(int i=0;i<2;i++){
          for(int j=0;j<n;j++){
            if(sinal == 1){
              cout << "##";
            }else if(sinal == -1){
              cout << "..";
            }
            sinal *= -1;
          }
          cout << endl;
        }
        sinal *= -1;
    }
  }
}

int main(){
  int t; cin >> t;
  while(t){
    solve();
    --t;
  }
}

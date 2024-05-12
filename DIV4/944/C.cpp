#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int aux;

    //cout << a << " " << b << " " << c << " " << d << endl;

    if(a > b){
      int aux = a;
      a = b;
      b = aux;
    }
    if(c>d){
      int aux = c;
      c = d;
      d = aux;
    }

    if(a > c){
      int aux1 = a;
      int aux2 = b;
      a=c;
      b=d;
      c=aux1;
      d=aux2;
    }

    if(a < c && b < d && b > c)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
    
}

int main(){
    int t; cin >> t;
    while(t){
        solve();
        --t;
    }
}

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
/*
 Retorna o indice do maior elemento do array que é menor do que o target
 O nome completo é Binary Search for The Biggest Left, eu acabei de inventar 
 (o nome, nao o algoritmo, sadly)
 */
int binSearch_bl( vector<int>& array, int target ){
    int n = array.size();
    int left = -1;//a[l] <= target
    int right = n;//target < a[r]
    int middle =left + (left + right)/2;

    while(left + 1 < right){
        
	middle = (left + right)/2;

        if(array[middle] < target){
          left = middle;
        }else{
          right = middle;
        }
    }
    return left;
}


void solve(){
  
  //uso binary search para encontrar o maior ponto A[i] menor que
  //a minha query, entao
  //  o tempo ate minha query é B[i] + (A[i+1]-A[i])/(B[i+1]-B[i])
  //  i.e, o tempo ate B[i] + distancia q falta / velocidade, pois
  //  V = D / t ----> t = D / V
  int n,k,query;
  cin >> n >> k >> query;
  vector<int> a, b, q;
  int a_values, b_values, q_values;
  a.pb(0); b.pb(0);

  for(int i=0;i<k;i++){
    cin >> a_values;
    a.pb(a_values);
  }
  for(int i=0;i<k;i++){
    cin >> b_values;
    b.pb(b_values);
  }
  for(int i=0;i<query;i++){
    cin >> q_values;
    q.pb(q_values);
  }

  vector<int> ans;
  
  for(int i=0;i<q.size();i++){

    int index = binSearch_bl(a, q[i]);
    //int velocidade = floor((a[index + 1] - a[index]) / (b[index+1] - b[index]));
    double velocidade = double(double((a[index + 1] - a[index])) / double((b[index+1] - b[index])));
    int distanciaRestante =  q[i] - a[index];
    //o tempo final vai ser o tempo de chegar em b[i] + (a distancia q resta / velocidade)
    int tempo = floor(b[index] + double(double(distanciaRestante) / double(velocidade)));
    int answer = b[index] + (q[i] - a[index]) * 1.0 * (b[index + 1] - b[index]) / (a[index + 1] - a[index]);
    ans.pb(answer);
    //ans.pb(tempo); 
    
  }
  for(int i=0;i<ans.size();i++){ 
    cout << ans[i] << " ";
  }cout << endl;
}

int main(){
    int t; cin >> t;
    while(t){
        solve();
        --t;
    }
}
#include <bits/stdc++.h>
using namespace std;
    
bool isBinary(int num){
    string s = to_string(num);
    int n = s.size();
    for(int i=0;i<n;i++)
        if(s[i] != '0' && s[i] != '1')
            return false;
    return true;
}

int existeDiv(vector<int>& lista, int curr){
    for(int i=1;i<lista.size();i++)
        if(curr % lista[i] == 0)
            return lista[i];
    return -1;

}
void solve(vector<int>& lista){
    
    int num; cin >> num;
    
    if(isBinary(num)){
        cout << "YES" << endl;
        return;
    }
    
    int curr = num;
    //especie de fatoraçao mas somente por numeros binarios?talvez
    while(existeDiv(lista, curr) != -1){
        int div = existeDiv(lista, curr);
        curr /= div;
        if(curr == 1)
            break;    
    }
    if(curr == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
    
int main(){

    vector<int> lista;
    for(int i=1;i<5000;i++){
        if(isBinary(i))
            lista.push_back(i);
    }

    int t; cin >> t;
    while(t){
        solve(lista);
        --t;
    }
}
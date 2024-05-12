#include <bits/stdc++.h>
using namespace std;

bool allTheSame(string s){
    char c = s[0];
    for(auto it:s){
        if(it != c){
            return false;
        }
    }return true;
}


void solve(){
    string s;
    cin >> s;

    if(s.size() == 1 || allTheSame(s)){
        cout << "NO" << endl;
        return;
    }
    int n = s.size();
    bool ok = false;
    string first = s;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(first[i] != first[j]){
                char aux = first[i];
                first[i] = first[j];
                first[j] = aux;
                ok = true;
                break;
            }
        }
        if(ok) break;
    }
    cout << "YES" << endl << first << endl;

}

int main(){
    int t; cin >> t;
    while(t){
        solve();
        --t;
    }
}
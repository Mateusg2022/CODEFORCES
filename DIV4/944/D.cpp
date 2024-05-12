#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int l=0, r=0;
    int qntPieces=0;
    int it=0;
    int n = s.size();

    for( ;r<n ;r++){
        //11010
        if(r != n-1){
            if(s[r] == '0'){
                int inside = false;
                while(s[r] != '1'){
                    inside = true;
                    r++;
                }
                if(inside) qntPieces++;
                r++;
                l = r;
                //cout << "qnt: " << qntPieces <<" l: " << l << " r: " << r << endl;
            }     
            if(s[r] == '1'){
                int inside = false;
                while(s[r+1] != '0'){
                    inside = true;
                    r++;
                }
                if(inside) qntPieces++;
                l = r;
                //cout << "qnt: " << qntPieces <<" l: " << l << " r: " << r << endl;
            }
        }
    }
    //  0 1 2 3 4
    //  1 1 0 1 0

    cout << qntPieces << endl;
}

int main(){
    int t; cin >> t;
    while(t){
        solve();
        --t;
    }
}
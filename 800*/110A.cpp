#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll int number; cin >> number;
    string s = to_string(number);
    int n=s.size();
    int qntLucky = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '4' || s[i] == '7')
            qntLucky++;
    }

    s = to_string(qntLucky);
    n = s.size();
    bool isLucky = true;

    for(int i=0;i<n;i++){
        if(s[i] != '4' && s[i] != '7')
            isLucky = false;
    }//40047 7747774
    if(isLucky) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    solve();
}
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int n = s.size();
    int countUpper=0, countLower=0;
    for(int i=0;i<n;i++){
        if('A' <= s[i] && s[i] <= 'Z') ++countUpper;
        else ++countLower;
    }
    if(countLower >= countUpper){
        for(int i=0;i<n;i++)
            cout << (char)tolower(s[i]);
        cout << endl;
    }else{
        for(int i=0;i<n;i++)
            cout << (char)toupper(s[i]);
        cout << endl;
    }
}

int main(){
    solve();
}
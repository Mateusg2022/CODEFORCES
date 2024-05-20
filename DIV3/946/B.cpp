#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define array vector<int>
#define ii pair<int,int>
#define fori(i,n) for(int i=0;i<n;i++)
#define forj(j,n) for(int j=0;j<n;j++)
#define ll long long

bool compare(char a, char b){
    return a<b;
}

void solve(){
    string s; int n;
    cin >> n;
    cin >> s;
    map<char,bool> used;
    vector<char> r;
    //cout << "size: " << s.size() << endl;
    //o map cria com valor falso
    //cout << "teste" << used['w'] << endl;
    for(char& c: s){

        if(!used[c])
            r.push_back(c);
        used[c] = true;
        
    }

    sort(r.begin(), r.end(), compare);
    
    for(int it=0;it<s.size();it++){
        for(int i=0;i<r.size();i++){
            if(s[it] == r[i]){
                s[it] = r[r.size() - i - 1];
                //cout << "replace: " << s[it] << " <-> " << r[r.size() - i + 1] << endl;
                break;
            }
        }
    }

    for(int i=0;i<s.size();i++)
        cout << s[i];
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
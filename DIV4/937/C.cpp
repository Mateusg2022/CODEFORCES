#include <bits/stdc++.h>
using namespace std;

void solve(){

    string s;
    cin >> s;

    string aux;
    aux.push_back(s[0]);
    aux.push_back(s[1]);

    int hour = stoi(aux);

    
    if(hour == 0){
        cout << "12" << s[2] << s[3] << s[4] << " AM" << endl;
    }else if (hour == 12){
        cout << s << " PM" << endl;
    }else if(hour > 12){
        if(hour%12 < 10)
            cout << "0" << hour%12 << s[2] << s[3] << s[4] << " PM" << endl;
        else    //okokoko
            cout << hour%12 << s[2] << s[3] << s[4] << " PM" << endl;
    }else{
        cout << s << " AM" << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t){
        solve();
        --t;
    }
}
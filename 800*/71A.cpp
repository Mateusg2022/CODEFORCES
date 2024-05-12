#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s;
    int n;
    cin >> n;

    vector<string> Strings;
    for(int i=0;i<n;i++){
        cin >> s;
        Strings.push_back(s);
    }

    for(int i=0;i<n;i++){
        s = Strings[i];
        if(s.size() <= 10){
            cout << s << endl;
        }else{
            cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
        }
    }
}
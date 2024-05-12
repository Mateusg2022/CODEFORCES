#include <iostream>
#include <string>
#define pb push_back
using namespace std;
int main(){
    string s;
    cin >> s;
    string aux1,aux2,aux3;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            aux1.pb('1');
            aux1.pb('+');
        }else if(s[i]=='2'){
            aux2.pb('2');
            aux2.pb('+');
        }else if(s[i] == '3'){
            aux3.pb('3');
            aux3.pb('+');
            
        }
    }
    if(aux3.size()>0)
        aux3.pop_back();
    else if(aux2.size()>0)
        aux2.pop_back();
    else 
        aux1.pop_back();
        
    cout << aux1 << aux2 << aux3 << endl;
}
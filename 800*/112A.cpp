#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string first, second;
    cin >> first >> second;
    int sum=0;
    char a, b;
    for(int i=0;i<first.size();i++){
        
        a = tolower(first[i]);
        b = tolower(second[i]);

        if(a > b){
            cout << "1" << endl;
            break;
        }else if(a < b){
            cout << "-1" << endl;
            break;
        }else{
            if(i == first.size()-1){
                cout << "0" << endl;
                break;
            }
            continue;
        }
    }
    
    //printf("%d",a[0]);
}
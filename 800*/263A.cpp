#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int x;
    int index1,index2;
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> x;
            if(x){
               index1 = i; index2 = j;
            }
        }
    }

    cout << fabs(index1 - 2) + fabs(index2 - 2) << endl;
    
}
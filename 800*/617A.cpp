#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> steps = {5,4,3,2,1};
    int x; cin >> x;

    int totalSteps = 0;

    int divQ = floor(x/5);
    totalSteps += divQ;
    int remaining = x%5;
    if(remaining != 0){

        divQ = floor(remaining/4);
        totalSteps += divQ;
        remaining = remaining%4;

        if(remaining != 0){    
            divQ = floor(remaining/3);
            totalSteps += divQ;
            remaining = remaining%3;

            if(remaining != 0){
                divQ = floor(remaining/2);
                totalSteps += divQ;
                remaining = remaining%2;

                if(remaining != 0)
                    totalSteps++;
            }
        }

    }
    cout << totalSteps << endl;

}
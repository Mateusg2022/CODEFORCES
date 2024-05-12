#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    string s; cin >> s;
    int countTotal = 0;

    for(int i=0; i<n-1; ){
        int j = i+1;//RBBR
        while(s[i] == s[j]){
            ++countTotal;
            j++;
        }i = j;
    }
    cout << countTotal << endl;
}
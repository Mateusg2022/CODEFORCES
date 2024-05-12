#include <bits/stdc++.h>
using namespace std;

void switch_s(string& s, int l, int r){
    int n = r-l+1;
    char lastOne = s[r];
    //0123
    //0110
    for(int i=r; i > l ; --i)
        s[i] = s[i-1];
    s[l] = lastOne;
}

int main(){
    string s = "0110";//-> 0011
    int l = 0, r = 3;
    switch_s(s,l,r);
    cout << s << endl;
}
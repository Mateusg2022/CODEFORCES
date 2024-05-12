#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n,m,a;
    cin >> n >> m >> a;
    
    long long int suf1 = 0;
    if(n%a > 0)
        suf1 = 1;
    
    long long int suf2 = 0;
    if(m%a > 0)
        suf2 = 1;

    long long int row = suf1 + floor(n/a);
    long long int col = suf2 + floor(m/a);

    cout << row * col << endl;

}
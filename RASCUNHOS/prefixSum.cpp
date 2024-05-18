#include <bits/stdc++.h>
using namespace std;

#define fori(i,n) for(int i=0;i<n;i++)

vector<int> PrefixSum(const vector<int>& v){

    int n = v.size();
    vector<int> prefixSum(n,0);
    int sum = v[0];
    prefixSum[0] = v[0];

    for(int i=1;i<=n;i++){

        prefixSum[i-1] = sum;
        sum += v[i];

    }
    return prefixSum;
}

int main(){
    
    vector<int> v = {2,4,7,11,13,23,39};
    int n = v.size();
    cout << "vector:            ";
    fori(i,n){cout << v[i] << " ";} cout << endl;

    vector<int> prefixSum = PrefixSum(v);

    cout << "prefix sum vector: ";
    fori(i,n){ cout << prefixSum[i] << " ";} cout << endl;


    cout << "exemplo: \nprefixSum[2,5]: " << prefixSum[5] - prefixSum[2-1] << endl;

}
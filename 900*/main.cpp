#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> lvl = {2,3,5,1,5};
    sort(lvl.begin(), lvl.end());
    for(int i=0;i<lvl.size();i++)
        cout << lvl[i] << " ";
    cout << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define array vector<int>
#define ii pair<int,int>
#define fori(i,n) for(int i=0;i<n;i++)
#define forj(j,n) for(int j=0;j<n;j++)
#define ll long long

void solve(){
    int x,y; cin >> x >> y;
    int area = x * y;

    int countRed = y;
    int countBlue = x;
    double countScreens = 0;
    
    while(countRed > 0 || countBlue > 0){
        int oneScreen = 15;
        if(countRed >= 2){
            countRed -= 2;
            oneScreen -= 8;
        }else if(countRed == 1){
            countRed -= 1;
            oneScreen -= 4;
        }

        if(countBlue >= 7){
            if(oneScreen > countBlue){
                oneScreen -= countBlue;
                countBlue = 0;
            }else if(oneScreen == countBlue){
                oneScreen = 0;
                countBlue = 0;
            }else{
                countBlue -= oneScreen;
                oneScreen = 0;
            }
        }else if(countBlue < 7){
            oneScreen -= countBlue;
            countBlue = 0;
        }
        countScreens++;
    }
    cout << countScreens << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
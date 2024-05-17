#include <bits/stdc++.h>
using namespace std;

void solve(){
    //o placar é plausível se pelo menos uma pontuação é par
    int p1,p2,p3; cin >> p1 >> p2 >> p3;

    //nao é plausível
    if( p1%2 != 0 && p2%2 != 0 && p3%2 != 0){
        cout << -1 << endl;
        return;
    }

    //1 impar e 2 pares tambem significa que nao é plausível
    if((p1%2 != 0 && p2%2==0 && p3%2==0) || 
        (p1%2 == 0 && p2%2!=0 && p3%2==0) || 
        (p1%2 == 0 && p2%2==0 && p3%2!=0)){
            cout << -1 << endl;
            return;
    }
    /**
     * For each testcase, print one number — the maximum possible number of draws that 
     * could've happened, or −1 if the scores aren't consistent  with any valid set of 
     * games and results.
    */

    int count = 0;
    while((p1 > 0 && p2 > 0) || (p1 > 0 && p3 > 0) || (p2 > 0 && p3 > 0)){

        if(p2 >= p1 && p3 >= p1){
            --p2;
            --p3;
            count++;
            continue;
        }

        if(p1 >= p3 && p2 >= p3){
            --p1;
            --p2;
            count++;
            continue;
        }

        if(p1 >= p2 && p3 >= p2){
            --p1;
            --p3;
            count++;
            continue;
        }

    }
    cout << count << endl;

}

int main(){
    int tt; cin >> tt;
    while(tt){
        solve();
        --tt;
    }
}
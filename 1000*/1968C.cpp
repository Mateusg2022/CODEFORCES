 #include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define fori(i,n) for(int i=0;i<n;i++)
#define array vector<int>

void solve(){
    int n; cin >> n;
    array arr;
    array ans;
    int temp;

    for(int i=0;i<n-1;i++){
        cin >> temp; arr.pb(temp);
    }

    //ans.pb(arr[0]+1);
    //ans.pb(arr[0]+arr[1]);
    //a dica foi usar 1000 pra limitar 
    //The maximal value of a will be at most 1000+500n what is smaller than 10^9.
    ans.pb(1000);
    int N = 1;

    //hint 3: ((a+b)moda) = a for 0 <= b < a
    for(int i=0;i<n-1;i++){
        int curr = 0;
        
        if(N >= 2)
            curr = ans[N-2];
        //enquanto nao encontrar o numero certo, incrementa
        while(curr % ans[N-1] != arr[i] || curr < ans[N-1]){
        //curr = ans[N-1] - 1;
        //while((arr[i] + ans[N-1]) % arr[i]){
            curr++;
            //cout << curr << " " << ans[N-1] << " " << arr[i] << endl;
        }
        ans.pb(curr);
        ++N;
    }
    fori(i,n) cout << ans[i] << " "; cout << endl;
}

int main(){
    int tt; cin >> tt;
    while(tt--){
        solve();
    }
}
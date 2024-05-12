#include <bits/stdc++.h>
using namespace std;


//SOLUÇAO FUFIDA Q EU PERDI TEMPO FAZENDO C:
long long int cost(long long int r, long long int l){
    return (r - l + 1);
}

void switch_s(string& s, long long int l, long long int r){
    long long int n = r-l+1;
    char lastOne = s[r];
    //0110 => 0011
    for(long long int i=r; i > l ; --i)
        s[i] = s[i-1];
    s[l] = lastOne;
}

long long int solve(string& s){
    long long int r=0,l=0;
    long long int n = s.size();
    
    long long int sum=0;
    //missing input: "101011" -> ok,"01101001" -> :C

    //01234567
    //01101001
    //cout << "str: " << s << " ";

    for(; r < n; ){
        
        //11000
        //posiciono left e right
        while((s[l] != '1' || s[r] != '0') && l <= r && r < n){
            
            if(s[l] != '1') ++l;
            if(s[r] != '0' || l > r) ++r;

            //cout << "l: " << l << " r: " << r << endl;
        }
        //acumula sse deu certo
        if((s[l] == '1' && s[r] == '0')){
            //cout << "l: " << l << " r: " << r << endl;
            sum += cost(r,l);
            switch_s(s,l,r);
        }
        //next window
        if(r >= n)
            break;
        else
            ++r;
        ++l;
    }
    //cout << "final str: " << s << " and sum: ";
    return sum;
}

//SOLUÇÃO NORMAL Q EU PRECISEI OLHAR
/*
To calculate the lower bound, you just need to maintain some info while iterating from left to 
right: for example, the number of 0-s and 1-s to the left of the current position and the total 
number of 0-s in s. 

It's enough to check: is there any 1 to the left of the current position, and how many 0-s 
are to the right.

Instead of calculating the lower bound itself, you can also implement one of the algorithms 
that reach that lower bound, and it may be even a little easier.
*/
int main(){
    long long int qntTest;
    cin >> qntTest;
    
    string s;
    vector<string> str;
    
    while(qntTest){
        cin >> s;
        str.push_back(s);
        --qntTest;
    }

    vector<int> qnt(2);
    long long int sum = 0, total_num_of_1s = 0, total_num_of_0s = 0;


    for(int i=0;i<str.size();i++){
        s = str[i];
        total_num_of_0s=0;
        for(auto& c: s){
            if(c == '0') total_num_of_0s++;
        }
        sum = 0;
        qnt[0] = 0;
        qnt[1] = 0;

        for(auto& c: s){
            if(c == '0')
                qnt[0]++;
            else 
                qnt[1]++;

            if(c == '0'){
                if(qnt[1] > 0 )
                    sum++;
            }else{
                sum += (total_num_of_0s - qnt[0]);
            }
        }
        cout << sum << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
//se comecar lendo 0's, continua ate ler 1
//quando ler um 1, marca ele com o left. Entao, continua andando
//com o right ate ler um zero novamente
//entao marca o right na posição desse zero e faz o flip.
//Isso vai fazer a quantidade maxima de 1's andarem para a esquerda enquanto 
//a substring é pequena, minimizando o custo do sort: r - l + 1

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

int main(){
    long long int qntTest = 5;
    //cin >> qntTest;
    
    string s;
    vector<string> str = {"010101010010101010",
                          "010101001010010101001001010101",
                          "01010100100101001001000100010100010001111111110000001010010101010001",
                          "0101010010010010010010100111111111110000000000000000000001010100101111111111111111111111111111111111111010101",
                          "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110"};
    
    //while(qntTest){
    //    cin >> s;
    //    str.push_back(s);
    //    --qntTest;
    //}

    for(long long int i=0;i<str.size();i++){
        cout << "custo: "<< solve(str[i]) << " sorted: " << str[i] << endl;
    }
}

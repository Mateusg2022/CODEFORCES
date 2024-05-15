#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x){
    int cont = 0;
    for(int i=1;i<=x;i++){
        if(x%i == 0)
            cont++;
    }
    if(cont == 2) return true;
    else return false;
}

int iterative_binary_search(vector<int> vector, int item){
    int begin = 0;
    int end = vector.size() - 1;

    while (begin <= end) {  /* Condição de parada */

        int i = (begin + end) / 2;  /* Calcula o meio do sub-vetor */

        if (vector[i] == item) {  /* Item encontrado */
            return i;
        }

        if (vector[i] < item) {  /* Item está no sub-vetor à direita */
            begin = i + 1;
        } else {  /* vector[i] > item. Item está no sub-vetor à esquerda */
            end = i;
        }
    }

    return -1;
}
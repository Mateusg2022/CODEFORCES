#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream arquivo("DIV4/937/input.txt");
    for(int i=1;i<10000;i=i+2){
        arquivo << i << endl;
    }
}
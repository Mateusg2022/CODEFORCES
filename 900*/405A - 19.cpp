#include <iostream>
#include <vector>
using namespace std;

void send_values_to_left(vector<vector<int>>& Box, int lines, int col){
    
    vector<vector<int>> aux(lines, vector<int>(col, 0));
    int reset=0;
    for(int i=0;i<Box.size();i++){
        for(int j=0;j<Box[i].size();j++){
            //cout << "marcador 4" << endl;
            if(Box[i][j] == 1){
                aux[i][col - 1 - reset] = 1;
                reset++;
            }
        }reset = 0;
    }
    //cout << "marcador 3" << endl;
    int sum=0;
    for(int i=0;i<col;i++){
        for(int j=0;j<lines;j++){
            sum += aux[j][i];
        }cout << sum << " ";
        sum = 0;
    }cout << endl;
    
}

int main()
{
    int col;
    cin >> col;
    vector<int> qnt;
    int lines = -1;
    int num;
    for(int i=0;i<col;i++){
        cin >> num;
        if(num > lines)
            lines = num;
        qnt.push_back(num);
    }
    //col: 4 
    //qnd: { 3, 2, 1, 2 }
    //ideia: montar uma matriz de 0's e 1's e arrastar os 1's para a esquerda de sua mesma linha
    
    vector<vector<int>> Box(lines, vector<int>(col, 0));

    //cout << "lines: " << lines << " col: " << col << endl;
    //for(int i=0;i<qnt.size();i++)
    //    cout << qnt[i] << " ";
    //cout << endl;

    for(int i=0;i<lines;i++){
        for(int j=0;j<col;j++){
            //genio ta
            if(qnt[j] >= lines - i){
                Box[i][j] = 1;
            }
        }
    }
    //cout << "marcador 1" << endl;

    //for(int i=0;i<Box.size();i++){
    //    for(int j=0;j<Box[i].size();j++){
    //        cout << Box[i][j] << " ";
    //    }cout << endl;
    //}

    //cout << "marcador 2" << endl;
    send_values_to_left(Box, lines, col);

    return 0;
}
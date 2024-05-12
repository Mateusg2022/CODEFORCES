#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int first, second, third;
    int answer=0;
    int sum;
    for(int i=0;i<n;i++){
        cin >> first >> second >> third;
        sum = first + second + third;
        if(sum >= 2)
            answer++;
    }
    cout << answer << endl;
}
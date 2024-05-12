#include <iostream>
#include <string>
using namespace std;

#define pb push_back

int main(){
  string s;
  int n;
  cin >> n;
  char c;
  for(int i=0;i<n;i++){
    cin >> c;
    s.pb(c);
  }
  int A_wins_count=0, D_wins_count=0;
  for(int i=0;i<n;i++){
    if(s[i] == 'D')
      D_wins_count++;
    else
      A_wins_count++;
  }
  if(A_wins_count > D_wins_count)
    cout << "Anton" << endl;
  else if(D_wins_count > A_wins_count)
    cout << "Danik" << endl;
  else
    cout << "Friendship" << endl;
return 0;
}

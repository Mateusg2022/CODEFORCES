#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
//"A", "O", "Y", "E", "U", "I",
	string s;
	cin >> s;
	string str;
	
	int n = s.size();
	for(int i=0;i<n;i++){
		s[i] = tolower(s[i]);
	}

	//put a '.' before each consonant
	for(char c: s){
		if(c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i'){
			str.pb('.');
			str.pb(c);
		}
	}
	
	cout << str << endl;

}
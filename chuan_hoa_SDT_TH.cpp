#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
	string s;
	getline(cin, s);
	if(s[0] == '+' && s[1] == '8' && s[2] == '4'){
		s.erase(s.begin(), s.begin()+3);
		s.insert(s.begin(), '0');
	} 
	else if(s[0] == '8' && s[1] == '4'){
		s.erase(s.begin(), s.begin()+2);
		s.insert(s.begin(), '0');
	}
	for(int i = 0; i < s.size(); i++){
		if(s[i] <'0' || s[i]>'9'){
			s.erase(s.begin()+i, s.begin()+i+1);
			i--;
			} 
		}
	cout << s;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		solve();
		cout << endl;
	}
}


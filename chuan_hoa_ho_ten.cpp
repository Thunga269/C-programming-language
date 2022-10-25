#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	getline(cin, s);
	int dem = 0, k = 0, h = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
		while(s[i] == ' ' && s[i+1] == ' ') s.erase(i, 1);
	}
	if(s[0] == ' ') s.erase(0, 1);
	if(s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
	for(int i = 1; i < s.size(); i++){
		if(s[i] == ' '){
			dem++;
			if(s[i+1] >= 'a' && s[i+1] <= 'z') s[i+1] -= 32; 
		}
	}
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == ' ') k++;
		if(k == dem) {
			cout <<",";
			k = 0;
			h = 1;
		}
		if(h == 1) if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
		cout << s[i];
	}
}
int main(){
	solve();
	cout << endl;
	return 0;
}


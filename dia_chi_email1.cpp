#include<bits/stdc++.h>
using namespace std;
void solve(){

}
int main(){
	string s, s2, s1;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++)
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
	for(int i = 0; i < s.size(); i++)
		if(s[i] == ' ') s2.push_back(s[i+1]);
	for(int i = s.size() - 1; i >= 0; i--){
		if(s[i] == ' ') break;
		s1.push_back(s[i]);
	}
	for(int i = s1.size() - 1; i >= 0; i--) cout << s1[i];
	cout << s[0];
	for(int i = 0; i < s2.size() - 1; i++) cout << s2[i];
	cout <<"@ptit.edu.vn";
		solve();
	return 0;
}


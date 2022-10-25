#include<bits/stdc++.h>
using namespace std;
int check(string s){
	int dem = 0, l = s.size();
	for(int i = 0; i < l / 2; i++){
		if(s[i] != s[l - 1 - i]) return 0;
		else dem++;
	}
	if(dem == l/2) return 1;
	return 0;
}
void solve(){
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++)
		if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
	for(int i = 0; i < s.size(); i++){
			if(s[i] >= 'A' && s[i] <= 'C') s[i] = '2';
			else if(s[i] >= 'D' && s[i] <= 'F') s[i] = '3';
			else if(s[i] >= 'G' && s[i] <= 'I') s[i] = '4';
			else if(s[i] >= 'J' && s[i] <= 'L') s[i] = '5';
			else if(s[i] >= 'M' && s[i] <= 'O') s[i] = '6';
			else if(s[i] >= 'P' && s[i] <= 'S') s[i] = '7';
			else if(s[i] >= 'T' && s[i] <= 'V') s[i] = '8';
			else if(s[i] >= 'W' && s[i] <= 'Z') s[i] = '9';
		}
	if(check(s) == 1) cout <<"YES";
	else cout <<"NO";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		scanf("\n");
		solve();
		cout << endl;
	}
	return 0;
}


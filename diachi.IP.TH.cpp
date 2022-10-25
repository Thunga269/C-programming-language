#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '.') s[i] = ' ';
	}
	//cout << s;
	stringstream ss(s);
	string s2;
	int temp = 0, dem = 0;
	while(ss >> s2){
		if(s2.size() > 3){
			temp = 1;
		}
		if(s2 <= "255" && s2 >= "0") temp = 0;
		else{
			temp = 1;
		}
		if(temp == 1) break;
		else dem++;
	}
	//cout << dem;
	if(temp == 0 && dem == 4) cout << "YES";
	else cout << "NO";
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


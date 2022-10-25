#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s, s1;
	getline(cin, s);
	int dem = 0;
	stringstream ss; // stringstream ss(s);
	ss << s;
	while(ss >> s1){
		dem++;
	}
	cout << dem;
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


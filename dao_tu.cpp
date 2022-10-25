#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve(){
	string s, s1;
	getline(cin, s);
	vector <string> a;
	stringstream ss(s);
	while(ss >> s1){
		a.push_back(s1);
	}
	for(int i = a.size() - 1; i >= 0; i--) cout << a[i] <<" ";
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


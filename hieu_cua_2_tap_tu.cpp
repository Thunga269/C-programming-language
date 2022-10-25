#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
set <string> a;
set <string> b;
set <string> c;
void solve(){
	string s1, s2, s3, s4;
	getline(cin, s1);
	getline(cin, s2);
	//cout << s1 << endl << s2;
	stringstream ss(s1);
	while(ss >> s3){
		a.insert(s3);
	}
	stringstream sss(s2);
	while(sss >> s4){
		b.insert(s4);
	}
	for(auto v:a){
		if(b.count(v) == 1) continue;
		else c.insert(v);
	}
	for(auto x:c) cout << x <<" ";
//for(auto v:a) cout << v <<" ";
//cout << endl;
//for(auto v:b) cout << v <<" ";
	a.clear();
	b.clear();
	c.clear();
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		//cin.ignore();
		solve();
		cout << endl;
	}
}


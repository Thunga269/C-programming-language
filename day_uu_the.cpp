#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	int x, dem = 0, chan = 0, le = 0;
	while(ss >> x){
		dem++;
		if(x % 2 == 0) chan++;
		else le++;
	}
	if((dem % 2 == 0 && chan > le)||(dem % 2 != 0 && chan < le)) cout << "YES";
	else cout << "NO";
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


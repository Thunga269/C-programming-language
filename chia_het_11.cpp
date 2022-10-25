#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin >> s;
	long long chan = 0, le = 0;
	for(int i = 0; i < s.size(); i++){
		if(i % 2 == 0) chan += (s[i] - '0');
		else le += (s[i] - '0');
	}
	if(abs(le - chan) % 11 == 0) cout <<"1";
	else cout <<"0";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
	return 0;
}


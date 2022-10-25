#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	string s;
	cin >> s;
	int sum = 0;
	for(int i = 0; i < s.size(); i++){
		if(i % 2 == 0) sum += s[i] - '0';
		else sum -= s[i] - '0';
	}
	if(sum % 11 == 0) cout << "yes";
	else cout << "no";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


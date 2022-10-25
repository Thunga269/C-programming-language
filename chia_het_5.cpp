#include<bits/stdc++.h>
using namespace std;
void solve(){
	scanf("\n");
	string s;
	cin >> s;
	long long dem = 0;
	for(long long j = 0; j < s.size(); j++){
		if(s[j] == '1'){
			long long i = s.size() - 1- j;
			 if(i % 4 == 0) dem += 1;
			else if(i % 4 == 1) dem += 2;
			else if(i % 4 == 2) dem += 4;
			else if(i % 4 == 3) dem += 3;
		}
	}
	if(dem % 5 == 0) cout <<"Yes";
	else cout << "No";
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


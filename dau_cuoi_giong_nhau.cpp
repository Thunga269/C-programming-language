#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin >> s;
	int dem = s.size();
	for(int i = 0; i < s.size() - 1; i++)
		for(int j = i + 1; j < s.size(); j++)
			if(s[i] == s[j]){
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


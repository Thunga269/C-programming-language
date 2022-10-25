#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
	vector <string> s;
	int n;
	cin >> n;
	scanf("\n");
	for(int i = 1; i <= n; i++){
		string ss;
		getline(cin, ss);
		s.push_back(ss);
	}
	sort(s.begin(), s.end());
	int dem = 1;
	for(int i = 1; i < n; i++) 
		if(s[i] != s[i - 1]) dem++;
	cout << dem;
}
int main(){
	int t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}

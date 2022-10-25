#include<bits/stdc++.h>
using namespace std;
vector <string> a;
void solve(){

}
int main(){
	string s, s1;
	getline(cin, s);
	stringstream ss(s);
	while(ss >> s1){
		for(int i = 0; i < s1.size(); i++){
			if(s1[i] >= 'A' && s1[i] <= 'Z' ) s1[i] += 32;
		}
		//string s2 = s1[0];
		a.push_back(s1);
	}
	int n = a.size();
	for(int i = 0; i < n-1; i++) {
		//if(a[i][0] >= 'A' && a[i][0] <= 'Z') a[i][0] += 32;
		cout << a[i][0];
	}
	cout << a[n-1];
	cout <<"@ptit.edu.vn";
		solve();
	return 0;
}


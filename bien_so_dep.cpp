#include<bits/stdc++.h>
using namespace std;
int solve(string s){
	if(s[6] == s[7] && s[7] == s[5] && s[10] == s[9] ) return 1;
	int dem = 0, dem1 = 0;
	for(int i = 5; i <= 10; i++){
		if(i != 8 && (s[i] == '6' || s[i] == '8')){
			dem++;
			if(dem == 5)
			return 1;
		}
		if(i != 7 && i != 8 && s[i] < s[i+1] && s[7] < s[9]){
			dem1++;
			if(dem1 == 3) return 1;
		}
	}
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		scanf("\n");
		string s;
		cin >> s;
		//cout << solve(s);
		if(solve(s) == 1) cout << "YES";
		else cout <<"NO";
		cout << endl;
	}
	return 0;
}


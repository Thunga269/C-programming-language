#include<bits/stdc++.h>
using namespace std;
void solve(string &s1, string &s2){
	string result;
	int l1 = s1.size(), l2 = s2.size();
	int rem = -1;
	for(int i = 0; i < l2; i++){
		int temp = (s1[l1-1-i] - '0') - (s2[l2-1-i] - '0');
		if(rem == 1) temp--;
		if(temp < 0){
			rem = 1;
			temp += 10;
		}else rem = 0;
		result.push_back(temp % 10 + '0');
	}
	for(int i = 0; i < l1-l2; i++){
		int temp = (s1[l1- l2-1-i] - '0');
		if(rem == 1) temp--;
		if(temp < 0){
			rem = 1;
			temp += 10;
		}else rem = 0;
		result.push_back(temp % 10 + '0');
	}
	for(int i = result.size() - 1; i >= 0; i--) cout << result[i];
}
int main(){
	int t;
	cin >> t;
	while(t--){scanf("\n");
		string s1, s2;
		cin >> s1 >> s2;
		if(s1 == s2) cout << "0";
		else if(s1.size() > s2.size())
			solve(s1, s2);
		else if(s1.size() == s2.size()){
			for(int i = 0; i < s1.size(); i++){
				if(s1[i] < s2[i]){
					solve(s2, s1);
					break;
				}else{
					solve(s1, s2);
					break;
				}
			}
		}
		else solve(s2, s1);
		cout << endl;
	}
	return 0;
}


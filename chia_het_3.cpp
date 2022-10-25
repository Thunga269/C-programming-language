#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	string s;
	cin >> s;
	int dem = 0, k = s.size() - 1;
	for(int i = 0;i < s.size() - 1; i++){
		int sum = 0;
		if((s[i] - '0') % 3 == 0){
			dem++;
			sum += s[i] - '0';
			//cout << s[i] <<" ";
		} 
		for(int j = i + 1; j < s.size(); j++){
			sum = sum + s[i] - '0' + s[j] - '0';
				//cout << "sum: " <<sum <<"-";
			if(sum % 3 == 0) {
				dem++;
				cout << sum << " ";
			}else sum -= s[j] - '0';
		}
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
}


#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int t;
vector <string> a;
void solve(){
	int cach;
	for(int i = 0; i < t; i++){
		cin >> cach;
		scanf("\n");
		string s, s1;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> s1){
			if(s1[0] <= 'z' && s1[0] >= 'a') s1[0] -= 32;
			for(int i = 1; i < s1.size(); i++)
				if(s1[i] <= 'Z' && s1[i] >= 'A') s1[i] += 32;
			a.push_back(s1);
		}
		if(cach == 1){
			cout << a[a.size() - 1] << " ";
			for(int j = 0; j < a.size() - 1; j++) cout << a[j] <<" "; 
		}else{
			for(int j = 1; j < a.size() ; j++) cout << a[j] <<" "; cout << a[0]; 
		}
		a.clear();
		cout << endl;
	}
}
int main(){
	cin >> t;
	solve();
}


#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int n;
void solve(){
	int dem = 0;
	int a[101][101], b[100001] = {};
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> a[i][j];
	for(int i = 0; i < n; i++)
		if(b[a[0][i]] == 0) b[a[0][i]] = 1;
	for(int i = 1; i < n; i++){
		for(int j = 0; j < n; j++){
			if(b[a[i][j]] == i) b[a[i][j]]++;
		}
	}
	for(int i = 0; i < 100001; i++){
		if(b[i] == n) dem++;
	}
	cout << dem;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		solve();
		cout << endl;
	}
}



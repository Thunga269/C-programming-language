#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
	int n, x, check[100001] = {}, k = 1;
	cin >> n >> x;
	int a[n+1];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		check[a[i]] = 1;
	}
	for(int i = 0; i < n; i++){
		if((a[i] >= x && check[(a[i] - x)] == 1)||( a[i] + x < 100001 && check[a[i] + x] == 1)){
			cout << "1";
			k = 0;
			break;
		}
	}
	if(k == 1) cout << "-1";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
void solve(){

}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x, dem = 0;
		cin >> n >> x;
		int a[n+1];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == x) dem++;
		}
		if(dem > 0) cout << dem;
		else cout << "-1";
		solve();
		cout << endl;
	}
	return 0;
}


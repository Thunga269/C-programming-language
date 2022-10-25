#include<bits/stdc++.h>
using namespace std;
void solve(){

}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a, m, dem = 0;
		cin >> a >> m;
		for(int i = 0; i < m; i++){
			if(a * i % m == 1){
				dem = 1;
				cout << i;
				break;
			}
		}
		if(dem == 0) cout << "-1";
		solve();
		cout << endl;
	}
	return 0;
}


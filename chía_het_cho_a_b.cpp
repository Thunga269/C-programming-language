#include<bits/stdc++.h>
using namespace std;
void solve(){

}
int main(){
	int t;
	cin >> t;
	while(t--){
		int m, n, a, b, dem = 0;
		cin >> m >> n >> a >> b;
		for(int i = m; i <= n; i++){
			if(i % a == 0 || i % b == 0) dem++;
		}
		cout << dem;
		solve();
		cout << endl;
	}
	return 0;
}


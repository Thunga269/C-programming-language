#include<bits/stdc++.h>
using namespace std;
void solve(){

}
int main(){
	int t;
	cin >> t;
	while(t--){
		int k, n, m = 0;
		cin >> n >> k;
		int a[k+1][n+1];
		int b[10001];
		for(int i = 0; i < k; i++)
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
				b[m++] = a[i][j];
			}
		sort(b, b + m);
		for(int i = 0; i < m; i++) cout << b[i] << " ";		
		solve();
		cout << endl;
	}
	return 0;
}


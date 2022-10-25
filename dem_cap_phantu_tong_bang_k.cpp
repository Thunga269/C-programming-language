#include<bits/stdc++.h>
using namespace std;
void solve(){

}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, dem = 0;
		cin >> n >> k;
		int a[n+1];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] + a[j] == k) dem++;
			}
		}
		cout << dem;
		solve();
		cout << endl;
	}
	return 0;
}


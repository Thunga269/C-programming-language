#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int a[n+1], max = 0;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++)
			if(a[i] - a[j] < max) {
				max = a[i] - a[j];
			}
	}
	if(max == 0) cout <<"-1";
	else cout << 0 - max;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
	return 0;
}


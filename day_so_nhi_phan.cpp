#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int a[n+1], b[n+1];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	int max = 0, vt = 0;
	for(int i = 0; i < n; i++){
		int sum1 = 0, sum2 = 0;
		for(int j = i; j < n; j++){
			sum1 += a[j];
			sum2 += b[j];
			if(sum1 == sum2) vt = j-i+1;
		}
		if(vt > max) max = vt;
	}
	cout << max;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


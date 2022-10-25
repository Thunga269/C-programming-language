#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
	int n, k, dem = 0;
	cin >> n >> k;
	int a[n+1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int i = 1, j = n;
	sort(a+1, a + n+1);
	while(i < j){
		if(a[i] + a[j] >= k){
			cout << a[i] <<"va"<<a[j] <<" ";
			//return 0
		}
		if(a[i] + a[j] <= k){
			i += 1;
			//j-=1;
		} 
		else if(a[i] + a[j] > k) j -= 1;
	}
	cout << dem;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


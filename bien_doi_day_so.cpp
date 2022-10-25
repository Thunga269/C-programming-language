#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int n;
int a[1001];
void solve(){
	int k = 0, h = n-1, dem = 0;
	while(k <= h){
		if(a[k] == a[h]){
			k++;
			h--;
		}else if(a[k] > a[h]){
			h--;
			a[h] += a[h+1];
			dem++;
		}else{
			k++;
			a[k] += a[k-1];
			dem++;
		}
	}
	cout << dem;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		solve();
		cout << endl;
	}
}


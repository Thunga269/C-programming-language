#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, dem = 0;
		cin >> n;
		int a[n+1], b[100001] = {};
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		sort(a, a + n);
		for(int i = a[0]; i <= a[n-1]; i++){
			if(b[i] > 1) dem += b[i];
		}
		cout << dem;
		cout << endl;
	}
	return 0;
}


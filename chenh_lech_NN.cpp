#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, min = 1000000000;
		cin >> n;
		long long a[n+1];
		for(long long i = 0; i < n; i++){
			cin >> a[i];
		} 
		sort(a, a+n);
		for(long long i = 0; i < n-1; i++){
			if(a[i+1] - a[i] < min){
				min = a[i+1] - a[i];
			} 
		}
		cout << min;
		cout << endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
long long solve(int n){
	int a[10001] = {};
	long long sum = 1;
	for(int i = 2; i <= n; i++){
		int j = 2, k = i, dem = 0;
		while(k > 1){
			if(k % j == 0){
				k = k / j;
				dem++;
				if(a[j] < dem) a[j] = dem;
			}else{
				j++;
				dem = 0;
			}
		}
	}
	for(int i = 0; i <= n; i++){
		if(a[i] != 0){
			int p = a[i];
			while(p != 0){
				sum = (long long) sum * i;
				p--;
			}
		}
	}
	return sum;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long k = solve(n);
		cout << k << endl;
	}
	return 0;
}


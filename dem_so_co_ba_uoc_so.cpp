#include<bits/stdc++.h>
using namespace std;
int snt(long long n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
void solve(long long n){
	long long dem = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(snt(i) == 1) dem++;
	}
	cout << dem;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		solve(n);
		cout << endl;
	}
	return 0;
}



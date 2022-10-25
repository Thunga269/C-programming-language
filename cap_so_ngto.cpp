#include<bits/stdc++.h>
using namespace std;
int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
void solve(int n){
	for(int i = 2; i <= n; i++){
			if(snt(i) == 1 && snt(n - i) == 1){
				cout << i <<" "<< n - i;
				 break;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		solve(n);
		cout << endl;
	}
	return 0;
}


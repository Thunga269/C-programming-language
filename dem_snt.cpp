#include<bits/stdc++.h>
using namespace std;
int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0) return 0;
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int l, r, dem = 0;
		cin >> l >> r;
		for(int i = l; i <= r; i++)
			if(snt(i) == 1) dem ++;
		cout <<dem;
		cout << endl;
	}
	return 0;
}


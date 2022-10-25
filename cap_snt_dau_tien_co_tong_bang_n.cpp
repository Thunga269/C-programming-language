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
		int n, dem = 0;
		cin >> n;
		for(int i = 2; i <= sqrt(n) + 1; i++){
			if(snt(i) == 1 && snt(n-i) == 1){
				dem = 1;
				cout << i <<" " << n-i << " ";
				break;
			} 
		}
		if(dem == 0) cout <<"-1";
		cout << endl;
	}
	return 0;
}


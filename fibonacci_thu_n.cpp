#include<bits/stdc++.h>
using namespace std;
long long m = 1e9+7;
void solve(int n){
	long long a1 = 1, a2 = 1, a = 1, i = 3;
	if(n == 1 || n == 2) cout << "1";
	else {
		while(n >= i){
		a = (a1%m + a2%m)%m;
		a1 = a2;
		a2 = a;
		i++;
	}
	cout << a;
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



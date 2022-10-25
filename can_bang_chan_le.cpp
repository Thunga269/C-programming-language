#include<bits/stdc++.h>
using namespace std;
int solve(int n){
	int chan = 0, le = 0;
	while(n > 0){
		int k = n % 10;
		if(k % 2 == 0) chan++;
		else le++;
		n /= 10;
	}
	if(chan == le) return 1;
	return 0;
}
int main(){
	int n;
	cin >> n;
	int right = 1, dem = 0;
	for(int i = 1; i <= n; i++)
		right *= 10;
	for(int i = right / 10; i < right; i++){
		if(solve(i) == 1){
			cout << i << " ";
			dem++;
		}
		if(dem == 10){
			cout << endl;
			dem = 0;
		}
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
void solve(){

}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k, sum = 0;
		cin >> n >> k;
		for(long long i = 1; i <= n; i++){
			sum += i % k;
		}
		solve();
		cout << sum <<endl;
	}
	return 0;
}


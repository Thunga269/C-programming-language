#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long check(long long n){
	long long dem = 0;
	while(n > 0){
		n /= 10;
		dem++;
	}
	return dem;
}
void solve(){
	long long x, y, z, n;
	cin >> x >> y >> z >> n;
	long long k = __gcd(x, y);
	long long bcnn1 = (x*y) / k;
	long long ucln = __gcd(bcnn1, z);
	long long bcnn = (bcnn1 * z) / ucln;
	long long m = bcnn;
	long long h = check(m);
	if(h > n) cout << "-1";
	else{
		long long p = pow(10, n - 1) ;
		if(p % bcnn == 0) cout << p;
		else {
			p = p / bcnn + 1;
			cout << p * bcnn;
		}
	}
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
	return 0;
}

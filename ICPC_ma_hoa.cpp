#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
long long M = 100;
void solve(){
	long long n, k;
	cin >> n>>k;
	long long x = n;
	while (k--){
		x += (x%M);
	}
	cout << x;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}



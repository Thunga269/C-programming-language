#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, m;
	cin >> n >> m;
	int a[100] = {0}, x, max1 = 1, max2 = 0;
	for(int i = 1; i <= n; i++){
		cin >> x;
		a[x] = a[x] + 1;
		if(a[x] > a[max1]) max1=x;
	}
	for(int i = m; i >= 1; i--)
		if(a[i] < a[max1] && a[i] >= a[max2]) max2 = i;
	if(max2 == 0) cout <<"NONE";
	else cout<<max2;
	
}
int main(){
	solve();
}

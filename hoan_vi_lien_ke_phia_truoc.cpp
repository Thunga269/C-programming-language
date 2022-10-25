#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int a[n + 1];
	for(int i = 1; i <= n; i++) cin >> a[i];
	int k = n;
	while(k > 0 && a[k] < a[k + 1]) k--; // tim vitri k
	int j = k + 1;
	for(int i = k + 2; i <= n; i++)
		if(a[i] < a[k]){
			j = i;
		}
	for(int i = k + 1; i < (n + k + 1) / 2; i++) {
		if(a[j] == a[i]) j = n - (i - k - 1);
		if(a[j] == a[n - (i - k - 1)]) j = i;
		swap(a[i], a[n - (i - k - 1)]);
	}
	swap(a[k], a[j]);
	for(int i = 1; i <= n; i++) cout <<a[i]<<" ";
}
int main(){
	int t = 1;
	//cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}

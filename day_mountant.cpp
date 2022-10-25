#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++) cin >> a[i];
	int l, r, tang = 0, giam = 0, max = 0;
	cin >> l >> r;
	int k = r - l;
	for(int i = l; i <= r; i++){
		if(a[i] >= a[max]) max = i;
		if(i < r && a[i] <= a[i+1]) tang++;
		else if(i < r && a[i] >= a[i+1]) giam++;
	}
	//cout << a[max];
	if(tang == k || giam == k) cout << "Yes";
	else{
		tang = 0, giam = 0;
		for(int i = l; i < max; i++)
			if(a[i] <= a[i+1]) tang++;
			else break;
		for(int i = max + 1; i < r; i++)
			if(a[i] >= a[i+1]) giam++;
			else break;
		if(tang == max - l && giam == r - max - 1) cout <<"Yes";
		else cout << "No";
	} 
}
int main(){
	int t;
	cin >> t;
	while(t--){
		 solve();
		 cout << endl;
	}
}


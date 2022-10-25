#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	long long a[n+1], dem = 0, duong = 0, am = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] > 0) duong++;
		else am++;
	} 
	for(int i = 0; i < n; i++){
		if(a[i] != 1 && a[i] != -1){
			if(a[i] > 0){
				while(a[i] > 1){
					a[i] --;
					dem++;
				}
			}else{
				while(a[i] < -1){
					a[i] ++;
					dem++;
				}
			}
		} 
	}
	if(am % 2 != 0) cout << dem + 1;
	else cout << dem;
	return 0;
}


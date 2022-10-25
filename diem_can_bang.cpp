#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, dem = 0;
		cin >> n;
		int a[n+1], tongtrai = 0, tongphai = 0, sum = 0;
		for(int i = 0; i < n; i++){
			cin>> a[i];
			sum += a[i];
		}
		for(int i = 0; i < n; i++){
			tongtrai += a[i];
			tongphai = sum - tongtrai - a[i+1];
			if(tongtrai == tongphai){
				cout << i + 2;
				dem++;
				break;
			}
		}
		if(dem == 0) printf("-1");
		cout << endl;
	}
}



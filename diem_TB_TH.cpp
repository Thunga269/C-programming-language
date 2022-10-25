#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
}
int main(){
	int t;
	cin >> t;
	double a[t+1], sum = 0;
	int h = t;
	for(int i = 0; i < t; i++){
		cin >> a[i];
	}
	sort(a, a + t);
	for(int i = 0; i < t; i++){
		if(a[i] != a[0] && a[i] != a[t-1]){
			sum += a[i];
		}else h--;
	}
	printf("%.2lf", (double)sum / h);
}

